# <p align="center">FT_PRINTF [Projet 42]</p>

<div align="center">
	<table>
		<tr><th>NOTE</th>
		<th>ENGLISH VERSION</th></tr>
		<tr><th><img src="https://github.com/mgayout/mgayout/blob/main/img/note/100.png" height="100"></th>
		<th><a href= "https://github.com/mgayout/ft_printf/blob/main/eng/README.md"><img src="https://github.com/mgayout/mgayout/blob/main/img/english.png" height="100"></a></th></tr>
	</table>
</div>

Le projet `FT_PRINTF` a pour but de nous faire découvrir la fonction `printf()`.

`int printf(const char* format, ...);`

Selon le sujet, la fonction `FT_PRINTF` ne doit que gérer les formats suivants :

`%c` Ecrit un char.

`%s` Ecrit un char*.

`%p` Ecrit une adresse de pointeur en format héxadécimal (minuscule).

`%d` Ecrit une valeur décimal avec une base de 10 (int).

`%i` Ecrit un entier avec une base de 10 (int).

`%u` Ecrit une valeur décimal non signé (positif) avec une base de 10.

`%x` Ecrit un nombre en format héxadécimal (minuscule).

`%X` Ecrit un nombre en format héxadécimal (majuscule).

`%%` Ecrit le caractère %.

## <p> </p>

## <p align="center">INSTALLATION</p>

* Pour télécharger `FT_PRINTF` :

```shell
git clone https://github.com/mgayout/ft_printf.git
```
<div align="center">
	<table>
		<tr><th colspan="2" align="center">Règles</th></tr>
		<tr><td align="center">make</td>
		<td>Compilation</td></tr>
		<tr><td align="center">make clean</td>
		<td>Suppression des fichiers objets</td></tr>
		<tr><td align="center">make fclean</td>
		<td>Suppression des fichiers objets et de l'archive libftprintf.a </td></tr>
		<tr><td align="center">make re</td>
		<td>Suppression des fichiers objets et de l'archive suivi d'une compilation</td></tr>
	</table>
</div>
