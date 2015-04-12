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
$x=$x+$y;//x=1 y=2//x=3
$y=$x-$y;//y=3-2//y=1
$x=$x-$y;
echo "x=".$x."<br>";
echo "y=".$y;
}
else
{
	swap($x,$y);
}
?>