// Creating an element in HTML
const ul = document.querySelector('ul');
const li = document.createElement('li');

// Adding elements in HTML

ul.append(li)

// Modifying the text in HTML

const firstListItem = document.querySelector('.list-items');

// console.log(firstListItem);

// console.log(firstListItem.innerText);
// console.log(firstListItem.textContent);
// console.log(firstListItem.innerHTML);

li.innerText = 'X-Men';

// Modifying Attributes and Classes

// li.setAttribute('id','heading1');
// li.removeAttribute('id')

li.classList.add('list-items')
// li.classList.remove('list-items')

console.log(li.classList.contains('list-items'))

// Remove Elements

li.remove()