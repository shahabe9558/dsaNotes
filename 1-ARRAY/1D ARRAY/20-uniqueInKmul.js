function uniqueKmultiple(arr, k)
{
    
    arr.sort((a,b) =>{return a -b});
    for(let i =0; i<arr.length; i++)
    {
        if(arr[i] != arr[i + k -1])
        {
            return arr[i + k -1];
        }
    }
    return -1;
}


const arr = [2,2,2,10,2];
console.log(uniqueKmultiple(arr, 4));