// DOM Manipulation

// Traverse the DOM

// Parent Node Traverse

let ul1 = document.querySelector('ul')

console.log(ul1.parentNode);
console.log(ul1.parentElement);

// let html = document.documentElement;

// console.log(html.parentNode)
// console.log(html.parentElement)

// it returns null because there is no node above the html tag




// Child Node Traverse

let ul2 = document.querySelector('ul')

// console.log(ul2.childNodes)
// console.log(ul2.firstChild)
// console.log(ul2.childNodes[1])
// console.log(ul2.lastChild)

// ul2.childNodes[1].style.backgroundColor = 'blue'

console.log(ul2.children)
console.log(ul2.firstElementChild)



// Sibling Node Traversal

let ul3 = document.querySelector('ul')
const div2 = document.querySelector('div')

console.log(div2.childNodes)

console.log(ul3.previousElementSibling)
console.log(ul3.nextElementSibling)