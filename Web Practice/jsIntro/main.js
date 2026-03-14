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
    return ChoiceH;
    // switch(ChoiceH){
    //     case "rock":
    //         //console.log("die");
    //         return "rock";
    //     case "paper":
    //         //console.log("die");
    //         return "paper";
    //     case "scissors":
    //         //console.log("die");
    //         return "scissors";
    //     default:
    //         console.log("error");
    //         break;
    // }

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



let roundIndex = 0;

function gameGo(choiceH){
    let magicNumber=0;
    let finalCC = getComputerChoice();
    let finalCH = getHumanChoice(choiceH);

    magicNumber = playRound(finalCH, finalCC, humanScore, compScore);

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

    roundIndex++;
    if(roundIndex===5){
        if(humanScore>compScore){
            console.log("you win twin");
        }
        else if(compScore>humanScore){
            console.log("you lose retard LMFAOOO");
        }
    }
}

const playRoundid = document.querySelector("#playRoundid");

const buttonP = document.createElement("button");
buttonP.classList.add("buttonS");
buttonP.textContent = "Play Rock Paper Scissors";

playRoundid.appendChild(buttonP);

buttonP.addEventListener("click", () => {
    ["rock", "paper", "scissors"].forEach((choice) => {
        const btn = document.createElement("button");
        btn.textContent = choice;
        btn.addEventListener("click", () => {
            gameGo(choice);
        });
        playRoundid.appendChild(btn);
    });
    buttonP.remove();
});