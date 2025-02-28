var a = new Promise(function(res){
    setTimeout(function(){
        data = {
            'Harsh':'Arora',
            'Vani' : 'Arora'
        }
        res(data)
    },5000);
});

console.log(a);

function fn(data){
    console.log("GOLI BETA MASTI NAHI ",data);
}
a.then(fn)