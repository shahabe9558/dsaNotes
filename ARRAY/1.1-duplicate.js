
function duplicate(arr){
    for(let i =0; i < arr.length; i++)
    {
      for(let j = i +1; j<arr.length; j++)
      {
        if(arr[i] == arr[j])
        {
            console.log(arr[i]);
        }
      }
    }
}
function duplicateM2(arr)
{
    arr.sort(function(a,b){
        return a -b;
    });
    for(let i =0; i<arr.length; i++)
    {
        if(arr[i] != arr[i+ 1] && arr[i] == arr[i-1])
        {
            console.log(arr[i]);
        }
    }
    
}
const arr = [1,2,3,4,3];
duplicateM2(arr);
// duplicate(arr);