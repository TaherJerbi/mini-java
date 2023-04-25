import subprocess
import sys
from PyQt6.QtWidgets import QApplication, QMainWindow, QWidget, QPlainTextEdit, QTextEdit, QPushButton, QVBoxLayout, QHBoxLayout
class JavaCompilerGUI(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("Mini Java Compiler")

        # Create the text areas
        self.input_textarea = QPlainTextEdit()
        self.output_textarea = QTextEdit()
        self.output_textarea.setReadOnly(True)

        # Create the compile button
        self.compile_button = QPushButton("Compile")
        self.compile_button.clicked.connect(self.compile_code)

        # Create the main layout
        main_layout = QHBoxLayout()

        # Create the left layout (output textarea)
        left_layout = QVBoxLayout()
        left_layout.addWidget(self.input_textarea)

        # Create the right layout (input textarea and compile button)
        right_layout = QVBoxLayout()
        right_layout.addWidget(self.output_textarea)
        right_layout.addWidget(self.compile_button)

        # Add the left and right layouts to the main layout
        main_layout.addLayout(left_layout)
        main_layout.addLayout(right_layout)

        # Create a central widget and set the main layout
        central_widget = QWidget()
        central_widget.setLayout(main_layout)

        # Set the central widget of the main window
        self.setCentralWidget(central_widget)

    def compile_code(self):
        # Get the code from the input textarea
        code = self.input_textarea.toPlainText()

        # execute `mini_java` with the code as input
        # and get the output
        file_name = "example.java"
        content = code

        # Open the file with 'write' mode
        with open(file_name, 'w') as file:
            # Write the content to the file
            file.write(content)

        # Execute the command `mini_java example.java`
        # and get the output
        output = subprocess.run(["./java_compiler/mini_java", file_name], capture_output=True)
        print(code)
        # Set the output and stderr in the output textarea
        if output.stderr:
            self.output_textarea.setPlainText(output.stderr.decode())
        else:
            self.output_textarea.setPlainText("Compilation Successful!")

if __name__ == "__main__":
    app = QApplication(sys.argv)
    gui = JavaCompilerGUI()
    gui.show()
    sys.exit(app.exec())