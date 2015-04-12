<?php
$x=$_GET['x'];
$y=$_GET['y'];
$call=$_GET['call'];
function swap (&$a,&$b)
{
	$t=$a;
	$a=$b;
	$b=$t;
	echo "a=".$a."<br>";
	echo "b=".$b;
};
if ($call==1)
{
$x=$x+$y;
$y=$x-$y;
$x=$x-$y;
echo "x=".$x."<br>";
echo "y=".$y;
}
else
{
	swap($x,$y);
}
?>