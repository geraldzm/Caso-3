# Análisis de datos, Caso 3!

Authors:
  Gerald Zamora Morales (@geraldzm) 2020053672
  Kelvin Nuñez Barrantes (@Vynidaulkel) 2019046494

Tercera tarea del curso de análisis de algoritmos, donde se compara el rendimiento en tiempo y memoria de C, C++, Go y Rust, en una búsqueda secuencial ordinaria.
### Descripción de la computadora: ###
Procesador: Intel Core i3-6100 3.7GHz Dual-Core Processor
Memoria principal: Corsair ValueSelect 8 GB DDR4-2666 CL18 Memory
Placa Madre: Gigabyte GA-H110M-H Micro ATX LGA1151 Motherboard
Tarjeta de video: MSI Radeon RX 470 4 GB GAMING X Video Card
Otros

# Tests

<table >
	<caption>Comparación de los lenguajes</caption>
	<col>  
	<colgroup  span="2"></colgroup>  <colgroup  span="2"></colgroup>
	<tr>
		<td  rowspan="2">Elements in array</td>
		<th colspan="2" >C</th>
		<th colspan="2" >C++</th>
		<th colspan="2" >Go</th>
		<th colspan="2">Rust</th>
	</tr>
	<tr>
		<th>Time ms</th> 
		<th>Memory bytes</th>
		 <th>Time ms</th>
		 <th>Memory bytes</th>
		  <th>Time ms</th>
		 <th>Memory bytes</th>
		  <th>Time ms</th>
		 <th>Memory bytes</th>
	</tr>
	<tr>
		<td>500,000</td>
		<td>0</td>
		<td>2,000,008</td>
		<td>0.8</td>
		<td>2,000,008</td>
		<td>0.8</td>
		<td>4,005,888</td>
		<td>12.4</td>
		<td>2,000,204</td>
	</tr>
		<tr>
		<td>1,000,000</td>
		<td>1.2</td>
		<td>4,000,008</td>
		<td>2.5</td>
		<td>4,000,008</td>
		<td>1</td>
		<td>7,991,700</td>
		<td>30</td>
		<td>4,000,200</td>
	</tr>
	</tr>
		<tr>
		<td>1,500,000</td>
		<td>2</td>
		<td>6,000,008</td>
		<td>3.2</td>
		<td>6,000,008</td>
		<td>2.4</td>
		<td>11,980,000</td>
		<td>36.8</td>
		<td>6,000,400</td>
	</tr>
	</tr>
		<tr>
		<td>2,000,000</td>
		<td>3</td>
		<td>8,000,008</td>
		<td>4</td>
		<td>8,000,008</td>
		<td>1.4</td>
		<td>15,950,500</td>
		<td>63.4</td>
		<td>8,000,200</td>
	</tr>
	</tr>
		<tr>
		<td>2,500,000</td>
		<td>4</td>
		<td>10,000,008</td>
		<td>5</td>
		<td>10,000,008</td>
		<td>2.8</td>
		<td>19,993,000</td>
		<td>77.4</td>
		<td>10,000,200</td>
	</tr>
	</tr>
		<tr>
		<td>3,000,000</td>
		<td>5</td>
		<td>12,000,008</td>
		<td>5.6</td>
		<td>12,000,008</td>
		<td>3.4</td>
		<td>23,991,000</td>
		<td>92.6</td>
		<td>12,000,100</td>
	</tr>
</table>


## Corridas ##
Para cada prueba se corre el algoritmo cinco veces y se toma el promedio del tiempo y memoria
### C ###
Con 500,000 elementos
![alt home]( https://i.imgur.com/yZg5E8M.png )
Con 1,000,000 elementos
![alt home]( https://i.imgur.com/xUODVkG.png )
Con 1,500,000 elementos
![alt home]( https://i.imgur.com/vRLRMgV.png)
Con 2,000,000 elementos
![alt home]( https://i.imgur.com/G3VVjqw.png )
Con 2,500,000 elementos
![alt home]( https://i.imgur.com/Bllllup.png )
Con 3,000,000 elementos
![alt home]( https://i.imgur.com/zMwHDvU.png )

### C++ ###
Con 500,000 elementos
![alt home]( https://i.imgur.com/Cq0feEy.png  )
Con 1,000,000 elementos
![alt home]( https://i.imgur.com/EW6fv6v.png )
Con 1,500,000 elementos
![alt home]( https://i.imgur.com/6PxrPSx.png )
Con 2,000,000 elementos
![alt home]( https://i.imgur.com/ywi0BTR.png )
Con 2,500,000 elementos
![alt home]( https://i.imgur.com/P6rZOaO.png )
Con 3,000,000 elementos
![alt home]( https://i.imgur.com/xsXABM5.png )

### GO ###
Con 500,000 elementos
![alt home]( https://imgur.com/a/Tg9XAQU.png )
Con 1,000,000 elementos
![alt home]( https://imgur.com/a/hT6EN1E.png )
Con 1,500,000 elementos
![alt home]( https://imgur.com/a/YRJZX35.png )
Con 2,000,000 elementos
![alt home]( https://imgur.com/a/sJAX4jp.png )
Con 2,500,000 elementos
![alt home]( https://imgur.com/a/GscTBLr.png )
Con 3,000,000 elementos
![alt home]( https://imgur.com/a/nO7wY5X.png )

### Rust ###
Con 500,000 elementos
![alt home]( https://imgur.com/a/XbXQhzH.png )
Con 1,000,000 elementos
![alt home]( https://imgur.com/a/j2BkF0J.png )
Con 1,500,000 elementos
![alt home]( https://imgur.com/a/xBkZMWc.png )
Con 2,000,000 elementos
![alt home]( https://imgur.com/a/0SYEwUk.png )
Con 2,500,000 elementos
![alt home]( https://imgur.com/a/6XlakoV.png )
Con 3,000,000 elementos
![alt home]( https://imgur.com/a/IbFynQE.png )
