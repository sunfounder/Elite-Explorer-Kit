.. note::

    Hola, ¡bienvenido a la Comunidad de Entusiastas de SunFounder para Raspberry Pi, Arduino y ESP32 en Facebook! Sumérgete en el mundo de Raspberry Pi, Arduino y ESP32 junto con otros entusiastas.

    **¿Por qué unirse?**

    - **Soporte experto**: Resuelve problemas postventa y desafíos técnicos con la ayuda de nuestra comunidad y equipo.
    - **Aprende y comparte**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Vistas previas exclusivas**: Obtén acceso anticipado a nuevos anuncios de productos y adelantos.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más recientes.
    - **Promociones y sorteos festivos**: Participa en sorteos y promociones de temporada.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy mismo.

.. _cpn_keypad:

Teclado
========================

Un teclado es una matriz rectangular de 12 o 16 botones OFF-(ON). 
Sus contactos son accesibles a través de un encabezado adecuado para la conexión con un cable de cinta o para inserción en una placa de circuito impreso. 
En algunos teclados, cada botón se conecta con un contacto separado en el encabezado, mientras que todos los botones comparten un suelo común.

.. image:: img/keypad314.png

Más a menudo, los botones están codificados en matriz, lo que significa que cada uno de ellos une un par único de conductores en una matriz. 
Esta configuración es adecuada para sondeo por un microcontrolador, que puede ser programado para enviar un pulso de salida a cada uno de los cuatro cables horizontales por turno. 
Durante cada pulso, verifica los cuatro cables verticales restantes en secuencia, para determinar cuál, si es que hay alguno, está llevando una señal. 
Se deben añadir resistencias pull-up o pull-down a los cables de entrada para evitar que las entradas del microcontrolador se comporten de manera impredecible cuando no hay ninguna señal presente.

**Ejemplo**

* :ref:`basic_keypad` (Basic Project)
