const arr = [];
let row = 3;
let col = 3;
let value = 0;

for(let i =0; i<row; i++)
{
    arr[i] = [];
    for(let j=0; j<col; j++)
    {
        arr[i][j] = value++;
    }
    console.log(arr);
}
console.log(arr);

