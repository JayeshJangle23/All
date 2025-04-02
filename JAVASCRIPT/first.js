// --> LECTURE 1 <--

// console.log("HELLO JS !");
// console.log("JAYESH");
// console.log("IISTX");

/*const Product={
    name : "Ball Pen",
    rating : 7.002,
    dealOfDay : true,
    price : 270,
};
console.log(Product);*/

/*const profile={
    Name : "SHRADHAKHAPRA",
    posts : 195,
    followers : "569k",
    following : 4,
    experience : "Apna Collage | EX-Microsoft , DRDO",
};
console.log(profile);
console.log(typeof profile["followers"]);*/

// --> LECTURE 2 <--
// ARTHMEICS , LOGICAL , COMPARISION , ASSIGNMENT OPERATORS
// ALERT AND PROMPT
/*  Q.1.
let n=prompt("ENTER A NUMBER :- ");
if(n%5===0){
    console.log(n," IS MULTIPLE OF 5");
}
else{
    console.log(n," IS NOT MULTIPLE OF 5");
}*/

/*let n=prompt("ENTER YOUR GRADE :- ");
if(n<=100 && n>=90){
    console.log(" A ");
}
else if(n<=89 && n>=70){
    console.log(" B ");
}
else if(n<=69 && n>=60){
    console.log(" C ");
}
else if(n<=59 && n>=50){
    console.log(" D ");
}
else if(n<=49 && n>=0){
    console.log(" F ");
}*/

// --> LECTURE 3 <--
// LOOPS AND STINGS
/*  Q.3.
for(let i=0;i<=100;i+=2){
    console.log(i);
}*/

/*  Q.4.
let n=prompt("ENTER A NUMBER :- ");
let gamenumber=25;
while(n!==gamenumber){
    let n=prompt("WRONG NUMBER , ENTER AGAIN :- ");
}
console.log(" CONGRATULATIOINS , YOU WON THE GAME ");*/

// --> LECTURE 4 <--
//  ARRAYS
/*  Q.1.
let marks=[1,2,3,4,5,6,7,8,9,10];
let sum=0;
for(let m of marks){
    sum+=m;
}
let ans=sum/marks.length;
console.log(ans);*/
/*  Q.2.
let price=[250,645,300,900,50];
for(let p=0;p<price.length;p++){
    let dis=price[p]*0.1;
    price[p]=price[p]-dis;
}
for(let p of price){
    console.log(p);
}*/
/*  Q.3.
let company=["BOLMBERG","MICROSOFT","UBER","GOOGLE","IBM","NETFLIX","OLA"];
company.shift();
console.log(company);
let i=0;
//company.splice(i,1);
for(let c of company){
    if(c=="OLA" || c=="UBER"){
        company.splice(i,1);
    }
    i++;
}
company.push("AMAZON");
console.log(company);*/


// --> LECTURE  <--
//  FUNCTIONS
/*  Q.1.
function countvowel(str){
    let count=0;
    for(char of str){
        if(char==='a'||char==='e'||char==='i'||char==='o'||char==='u'||char==='s'){
            count++;
        }
    }
    console.log(count);
}*/
/*  Q.2.
countvowel=(str)=>{
    let count=0;
    for(char of str){
        if(char==='a'||char==='e'||char==='i'||char==='o'||char==='u'){
            count++;
        }
    }
    console.log(count);
}*/
/*  Q.3.
let findsquare=(val)=>{
    console.log(val*val);
}
let arr=[1,2,3,4,5,6];
arr.forEach(findsquare);
console.log(arr);
        OR
let arr=[1,2,3,4,5,6];
arr.forEach(function findsquare(val){
    console.log(val*val);
});
console.log(arr);*/
/*  Q.4.
let arr=[85,60,90,50,40,30,10,80,99];
let filterarr=arr.filter((val)=>{
    return val>50;
});
console.log(filterarr);*/
/*  Q.5.
let n=prompt("ENTER A NUMBER :- ");
let arr=[];
for(let i=0;i<n;i++){
    arr[i]=i+1;
}
let output=arr.reduce((prev,curr)=>{
    return prev+curr;
});
console.log(output);*/

/*  Lecture -> 7
Q.1.
let el=document.createElement("button");
el.innerText="CLICK ME !! ";
el.style.backgroundColor="red";
el.style.color="white";
document.querySelector("#box").prepend(el);*/