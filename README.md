# auton
Autonomy sandbox used to implement controls, perception, planning, fault protection, and more

## Project Structure
```
auton/
|-- sketches/
    |-- motorControl/
        |-- motorControl.ino
|-- README.md
```
## Dependencies
* arduino-cli
* gcc

## Using arduino-cli
 List board fqbn, port, and name
    ``` bash
        arduino-cli board list
    ```
---
 Compiling Sketch
    ``` bash
        arduino-cli compile --fqbn arduino:avr:uno [path-to-sketch]
    ```
---
 Uploading Sketch
    ``` bash
        arduino-cli upload -p [arduino-port-name] --fqbn arduino:avr:uno [path-to-sketch]
    ```
