
// if one number appears two time 
function uniqueElement(arr)
{
    let ans = 0;
    for(let i = 0; i<arr.length; i++)
    {
        ans = ans ^ arr[i];
        console.log(ans);
    }
    return ans;
}

// brute force method 
function uniqueElement2(arr)
{
  for(let i =0; i<arr.length; i++) 
  {
    let cnt = 0;
    for(let j = 0; j<arr.length; j++)
    {
        if(i != j)
        {
            if(arr[i] == arr[j])
            {
                cnt++;
            }
        }
    }
    if(cnt == 0)
    {
        return arr[i];
    }
  }
}
const arr =[6,2,5,3,2,6,3];
// let unique = uniqueElement(arr);
// console.log(unique);
let unique2 = uniqueElement2(arr);
console.log(unique2);