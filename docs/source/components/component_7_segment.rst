.. note::

    ¡Hola, bienvenido a la Comunidad de Entusiastas de SunFounder para Raspberry Pi, Arduino y ESP32 en Facebook! Profundiza en Raspberry Pi, Arduino y ESP32 con otros entusiastas.

    **¿Por qué unirse?**

    - **Soporte experto**: Resuelve problemas postventa y desafíos técnicos con la ayuda de nuestra comunidad y equipo.
    - **Aprende y comparte**: Intercambia consejos y tutoriales para mejorar tus habilidades.
    - **Vistas previas exclusivas**: Obtén acceso anticipado a nuevos anuncios de productos y adelantos.
    - **Descuentos especiales**: Disfruta de descuentos exclusivos en nuestros productos más nuevos.
    - **Promociones y sorteos festivos**: Participa en sorteos y promociones de temporada.

    👉 ¿Listo para explorar y crear con nosotros? Haz clic en [|link_sf_facebook|] y únete hoy mismo.

.. _cpn_7segment:

Pantalla de 7 segmentos
==========================

.. image:: img/7-seg.jpg

Una pantalla de 7 segmentos es un componente en forma de 8 que contiene 7 LEDs. Cada LED se llama segmento: cuando se energiza, un segmento forma parte de un número que se muestra.

Hay dos tipos de conexión de pines: Cátodo Común (CC) y Ánodo Común (CA). Como su nombre indica, una pantalla CC tiene todos los cátodos de los 7 LEDs conectados, mientras que una pantalla CA tiene todos los ánodos de los 7 segmentos conectados.

En este kit, usamos la pantalla de 7 segmentos de Cátodo Común. Aquí está el símbolo electrónico.

.. image:: img/segment_cathode.png
    :width: 800

Cada uno de los LEDs en la pantalla tiene un segmento posicional con uno de sus pines de conexión saliendo del paquete plástico rectangular. Estos pines LED están etiquetados de "a" a "g", representando cada LED individual. Los otros pines LED están conectados juntos formando un pin común. Así, polarizando directamente los pines apropiados de los segmentos LED en un orden particular, algunos segmentos se iluminarán y otros permanecerán apagados, mostrando el carácter correspondiente en la pantalla.

**Códigos de visualización**

Para ayudarte a entender cómo las pantallas de 7 segmentos (Cátodo Común) muestran números, hemos elaborado la siguiente tabla. Los números son del 0 al F que se muestran en la pantalla de 7 segmentos; (DP) GFEDCBA se refiere al conjunto de LED correspondiente configurado en 0 o 1. Por ejemplo, 00111111 significa que DP y G están configurados en 0, mientras que los demás están configurados en 1. Por lo tanto, el número 0 se muestra en la pantalla de 7 segmentos, mientras que el Código HEX corresponde al número hexadecimal.

.. image:: img/segment_code.png

**Ejemplo**

* :ref:`basic_7segment` (Basic Project)
* :ref:`basic_74hc595` (Basic Project)
* :ref:`fun_digital_dice` (Fun Project)
