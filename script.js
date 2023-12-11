console.log("Hello World");
const o = new Object();
o.firstName = "Aman";
o.lastName = "Kumar";
o.isTeaching = true;
o.greet = function(){
    console.log("Hi!");
}

const o2 = {};
o2.firstName = "Aman";
o2["lastName"] = "Kumar";
const key = "isTeaching";
o2[key] = true;
o2["greet"] = function(){
    console.log("Hi!");
}
const o3 ={
    firstName: "Aman",
    lastName: "Kumar",
    isTeaching: true,
    greet: function(){
        console.log("Hi!");
    },
    address: {
        street: "Main St.",
        number: 123
    }
};
console.log(o3.address.number);