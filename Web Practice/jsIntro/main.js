// node "Web Practice/jsIntro/main.js"

let humanScore = 0;
let compScore = 0;

function getComputerChoice(){
    let choiceC=Math.random();
    if(choiceC<=0.3334){
        console.log("paper");
        return "paper";
    }
    else if(choiceC<=0.6667 && choiceC>0.3334 ){
        console.log("rock");
        return "rock";
    }
    else{
        console.log("scissors");
        return "scissors";
    }

}


function getHumanChoice(choiceH){
    let ChoiceH = choiceH.toLowerCase()
    
    switch(ChoiceH){
        case "rock":
            //console.log("die");
            return "rock";
        case "paper":
            //console.log("die");
            return "paper";
        case "scissors":
            //console.log("die");
            return "scissors";
        default:
            console.log("error");
    }

}
function playRound(hChoice, cChoice) {

    if(hChoice === cChoice){
        console.log("tie");
    }
    else if(hChoice.length===4 && cChoice.length===5){
        console.log("comp win");
    }
    else if(hChoice.length===4 && cChoice.length===8){
        console.log("human win");
    }
    else if(hChoice.length===8 && cChoice.length===4){
        console.log("computer win");
    }
    else if(hChoice.length===8 && cChoice.length===5){
        console.log("human win");
    }
    else if(hChoice.length===5 && cChoice.length===8){
        console.log("computer win");
    }
    else if(hChoice.length===5 && cChoice.length===4){
        console.log("human win");
    }
    else{
        console.log("error");
    }
}


for (let index = 0; index < 5; index++) {
    
    let finalCC = getComputerChoice();

    let choiceH = prompt("what?")

    let finalCH=getHumanChoice(choiceH)

    playRound(finalCH,finalCC);
    
}
// let finalCC = getComputerChoice();

// let choiceH = prompt("what?")

// let finalCH=getHumanChoice(choiceH)

// playRound(finalCH,finalCC);
