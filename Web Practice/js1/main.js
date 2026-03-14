// your JavaScript file
const container = document.querySelector("#container");

const content = document.createElement("div");
content.classList.add("content");
content.textContent = "This is the glorious text-content!";


const contentH1 = document.createElement("h1");
contentH1.classList.add("contentH1");
contentH1.textContent = "im h1!";


const contentp = document.createElement("p");
contentp.classList.add("contentp");
contentp.textContent = "pee";
contentp.style.color = "blue";

container.appendChild(content);
container.appendChild(contentH1);
container.appendChild(contentp);

const newDiv = document.createElement("div");
newDiv.classList.add("content");
newDiv.textContent = "i hate you js!";
newDiv.style.backgroundColor = "pink";
newDiv.style.borderWidth = "2px";
newDiv.style.borderStyle = "solid";
newDiv.style.borderColor = "black";
container.appendChild(newDiv);
