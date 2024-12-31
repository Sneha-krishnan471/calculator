<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Calculator</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            display: flex;
            justify-content: center;
            align-items: center;
            height: 100vh;
            margin: 0;
            background-color: #f4f4f4;
        }

        .calculator {
            width: 300px;
            background: #fff;
            padding: 20px;
            border-radius: 10px;
            box-shadow: 0 4px 10px rgba(0, 0, 0, 0.2);
        }

        .calculator-display {
            width: 100%;
            height: 50px;
            margin-bottom: 20px;
            border: 1px solid #ccc;
            border-radius: 5px;
            text-align: right;
            font-size: 1.5em;
            padding: 10px;
            background-color: #f9f9f9;
        }

        .calculator-buttons {
            display: grid;
            grid-template-columns: repeat(4, 1fr);
            gap: 10px;
        }

        button {
            padding: 15px;
            font-size: 1.2em;
            border: none;
            border-radius: 5px;
            background: #007bff;
            color: white;
            cursor: pointer;
            transition: background 0.3s;
        }

        button:hover {
            background: #0056b3;
        }

        button.clear {
            background: #dc3545;
        }

        button.clear:hover {
            background: #a71d2a;
        }
    </style>
</head>
<body>
    <div class="calculator">
        <input type="text" id="display" class="calculator-display" disabled />
        <div class="calculator-buttons">
            <button onclick="appendValue('7')">7</button>
            <button onclick="appendValue('8')">8</button>
            <button onclick="appendValue('9')">9</button>
            <button onclick="appendValue('/')">/</button>

            <button onclick="appendValue('4')">4</button>
            <button onclick="appendValue('5')">5</button>
            <button onclick="appendValue('6')">6</button>
            <button onclick="appendValue('*')">*</button>

            <button onclick="appendValue('1')">1</button>
            <button onclick="appendValue('2')">2</button>
            <button onclick="appendValue('3')">3</button>
            <button onclick="appendValue('-')">-</button>

            <button onclick="appendValue('0')">0</button>
            <button onclick="appendValue('.')">.</button>
            <button onclick="calculateResult()">=</button>
            <button onclick="appendValue('+')">+</button>

            <button class="clear" onclick="clearDisplay()">C</button>
        </div>
    </div>

    <script>
        const display = document.getElementById('display');

        function appendValue(value) {
            display.value += value;
        }

        function clearDisplay() {
            display.value = '';
        }

        function calculateResult() {
            try {
                display.value = eval(display.value);
            } catch (e) {
                alert('Invalid Expression');
                clearDisplay();
            }
        }
    </script>
</body>
</html>