<?php
$m=$_GET['m'];
$p=$_GET['p'];
$c=$_GET['c'];
$php=$_GET['ph'];
$d=$_GET['d'];
function average($sum)
{
	echo $sum/5;
}
function grade($sum)
{
	$sum=$sum/5;
	if($sum>90)
		echo 'a';
	else if ($sum>70 && $sum<=90)
		echo 'b';
	else
		echo 'c';
}
$sum=$m+$p+$c+$php+$d;
grade($sum);
?>