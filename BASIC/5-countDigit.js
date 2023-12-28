
// function countNum(num)
// {
//     var cnt =0;
//     while(num != 0)
//     {
//         num = Math.floor(num / 10);
//         cnt++;
//     }
//     return cnt;
// }
function countNum2(num)
{
   let s =  num.toString();
   return s.length;

}

var num = 55;
console.log(countNum2(num));