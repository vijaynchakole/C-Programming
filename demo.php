
<?php

if($_POST)
{
print_r($_POST)

}
<form action = "" method = "POST">

<input type = "text" name = "name[]">
<input type = "text" name = "email[]">

$name = $_POST['name'];
$email = $_POST['email'];


foreach($name as $v)
{
print $v;

}
foreach($email as $e)
{

print $e ;

}
