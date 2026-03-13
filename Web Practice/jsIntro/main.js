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
function playRound(hChoice, cChoice, humanScore, compScore) {

    

    if(hChoice === cChoice){
        console.log("tie");
    }
    else if(hChoice.length===4 && cChoice.length===5){
        // console.log("comp win");
        compScore = 2;
        return compScore;
    }
    else if(hChoice.length===4 && cChoice.length===8){
        // console.log("human win");
        humanScore = 1;
        return humanScore;
    }
    else if(hChoice.length===8 && cChoice.length===4){
        // console.log("computer win");
        compScore = 2;
        return compScore;
    }
    else if(hChoice.length===8 && cChoice.length===5){
        // console.log("human win");
        humanScore = 1;
        return humanScore;
    }
    else if(hChoice.length===5 && cChoice.length===8){
        // console.log("computer win");
        compScore = 2;
        return compScore;
    }
    else if(hChoice.length===5 && cChoice.length===4){
        // console.log("human win");
        humanScore = 1;
        return humanScore;
    }
    else{
        console.log("error");
    }
}


for (let index = 0; index < 5; index++) {
    
    let magicNumber=0;
    let finalCC = getComputerChoice();

    let choiceH = prompt("what?")

    let finalCH=getHumanChoice(choiceH)

    magicNumber= playRound(finalCH,finalCC,humanScore,compScore);

    if(magicNumber===1){
        humanScore += 1;
        console.log("Human Score: " + humanScore);
        console.log("Computer Score: " + compScore);
    }
    else if(magicNumber ===2){
        compScore += 1;
        console.log("Human Score: " + humanScore);
        console.log("Computer Score: " + compScore);
    }
    if(index===4){
        if(humanScore>compScore){
            console.log("you win twin");
        }
        else if(humanScore>compScore){
            console.log("you lose retard LMFAOOO");
        }

    }
    
    
}
// let finalCC = getComputerChoice();

// let choiceH = prompt("what?")

// let finalCH=getHumanChoice(choiceH)

// playRound(finalCH,finalCC);
