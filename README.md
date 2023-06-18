# Edge Impulse Data Collector
Este programa permite subir los datos de un giroscopio GY-521 MPU6050 conectado a un módulo DevKit ESP32 a una frecuencia de 50 Hz. Estos datos se utilizan para el entrenamiento en la nube de un modelo de Machine Learning en el servicio EdgeImpulse. La utilidad utilizada para cargar los datos es Edge Impulse data forwarder v1.5.0.

## Descripción
El programa se encarga de leer los datos del giroscopio GY-521 MPU6050 conectado al módulo DevKit ESP32. Estos datos se capturan a una frecuencia de 50 Hz y se envían a Edge Impulse utilizando la utilidad data forwarder v1.5.0. Los datos se utilizan para entrenar un modelo de Machine Learning en la plataforma de Edge Impulse.

## Configuración
Antes de utilizar el programa, asegúrate de seguir estos pasos de configuración:
<ol>
<li>Conecta el giroscopio GY-521 MPU6050 al módulo DevKit ESP32.
</li>
<li>Descarga e instala la utilidad Edge Impulse data forwarder v1.5.0 en tu computadora.
</li>
<li>Configura las credenciales de tu cuenta de Edge Impulse en la utilidad data forwarder.</li>
</ol>

## Uso
<ol>
<li>Abre el programa en el IDE Arduino.</li>
<li>Configura los parámetros necesarios, como el puerto serial a 115200 y la frecuencia de muestreo.</li>
<li>Compila y carga el programa en el módulo DevKit ESP32.</li>
<li>Ejecuta la utilidad Edge Impulse data forwarder v1.5.0 en tu computadora. </li>
<li>Inicia la adquisición de datos desde el módulo DevKit ESP32. </li>
<li>Selecciona el etiquetado de tus datos en Edge Impulse.</li>
<li>Los datos serán enviados automáticamente a Edge Impulse para su entrenamiento.</li> </ol>
