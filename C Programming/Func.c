<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Barcode Scanner</title>
    <style>
        /* Basic styling for the scanner */
        #interactive {
            position: relative;
            width: 100%;
            height: 300px;
            border: 2px solid #333;
            margin: 20px auto;
        }
        #barcodeResult {
            font-size: 1.5em;
            margin-top: 20px;
            text-align: center;
        }
    </style>
</head>
<body>
    <div id="interactive" class="viewport"></div>
    <div id="barcodeResult">Waiting for scan...</div>

    <!-- Include QuaggaJS Library -->
    <script src="https://serratus.github.io/quaggaJS/dist/quagga.min.js"></script>
    <script>
        // Initialize QuaggaJS
        Quagga.init({
            inputStream: {
                type: "LiveStream",
                constraints: {
                    width: 640,
                    height: 480,
                    facingMode: "environment" // Use rear camera
                }
            },
            decoder: {
                readers: ["code_128_reader", "ean_reader", "ean_8_reader", "upc_reader"] // Barcode types
            }
        }, function(err) {
            if (err) {
                console.log(err);
                return;
            }
            console.log("Initialization finished. Ready to start");
            Quagga.start();
        });

        // Detect barcode and display result
        Quagga.onDetected(function(result) {
            const code = result.codeResult.code;
            document.getElementById("barcodeResult").innerText = "Barcode Detected: " + code;
            Quagga.stop(); // Stops scanning after detection
        });
    </script>
</body>
</html>
