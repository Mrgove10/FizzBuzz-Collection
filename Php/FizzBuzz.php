<?
$limit = 100;
for ($i=0; $i <= $limit; $i++) { 
    $string = "";
    if($i % 3 == 0){
        $string += "Fizz"; //TODO
    }
    if($i % 5 == 0){
        $string += "Buzz";
    }
    echo($string);
}