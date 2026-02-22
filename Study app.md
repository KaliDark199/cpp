*Base:*
1. Programa que te avise en una fecha dada alguna cosa que tengas que hacer (días o horas de anticipación)
2. Tiene que tener notificaciones.
3. Tener una base de datos sql
4. Funcionara en terminal (? o con su propia pantalla [lo dirá el tiempo])
5. 

**Lógica:**
1. Pedido de las tareas.
2. Pedido de la fecha y tiempo limite de la tareas
3. Pedido de cuanto tiempo antes se te tiene que avisar esta tareas
4. Almacenamiento de estas tareas en la base de datos
5. Cálculo de cuanto tiempo pasara hasta enviar la notificación
    a. Se considerara la fecha y hora de ese momento con el de la fecha indicada 
    b.Cada que se reinicia el dispositivo pedir a la base de datos la información
6. Con el tiempo cálculado esperar hasta que pase ese momento y lanzar la notificación
7. Que en la notificación se pueda dar una respuesta almacenada en la computadora
    a. Las respuestas se separa en La estoy haciendo, En proceso de hacerla
    b. En base a estas se decidira si se vuelve a enviar la notificación o no es  necesario (pasando un lapso de 5 minutos)
8. Cuando la tarea sea realizada "la estoy haciendo" será eliminada de la base de datos
