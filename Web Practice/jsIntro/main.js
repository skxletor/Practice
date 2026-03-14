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
    const humanSS = document.querySelector(".scoreboard");
    const compSS = document.querySelector(".scoreboard");
    const status = document.querySelector(".scoreboard");

    magicNumber = playRound(finalCH, finalCC, humanScore, compScore);

    // show round result
    const oldResult = document.querySelector(".roundResult");
    if(oldResult) oldResult.remove();
    const result = document.createElement("p");
    result.classList.add("roundResult");
    if(magicNumber===1){
        humanScore += 1;
        result.textContent = `Human wins the round! (${finalCH} beats ${finalCC})`;
    } else if(magicNumber===2){
        compScore += 1;
        result.textContent = `Computer wins the round! (${finalCC} beats ${finalCH})`;
    } else {
        result.textContent = `Tie! Both chose ${finalCH}.`;
    }
    humanSS.appendChild(result);

    // update score displays
    const oldHuman = document.querySelector(".human");
    if(oldHuman) oldHuman.remove();
    const human = document.createElement("p");
    human.classList.add("human");
    human.textContent = "Human score: " + humanScore;
    humanSS.appendChild(human);

    const oldComp = document.querySelector(".comp");
    if(oldComp) oldComp.remove();
    const comp = document.createElement("p");
    comp.classList.add("comp");
    comp.textContent = "Computer score: " + compScore;
    compSS.appendChild(comp);

    roundIndex++;
    if(roundIndex===5){
        if(humanScore>compScore){
            const humanWin = document.createElement("p");
            humanWin.classList.add("humanWin");
            humanWin.textContent = "You win!";
            status.appendChild(humanWin);
        }
        else if(compScore>humanScore){
            const compWin = document.createElement("p");
            compWin.classList.add("compWin");
            compWin.textContent = "Computer wins!";
            status.appendChild(compWin);
        }
        else {
            const tieGame = document.createElement("p");
            tieGame.classList.add("tieGame");
            tieGame.textContent = "It's a tie game!";
            status.appendChild(tieGame);
        }
    }
}

const playRoundid = document.querySelector("#playRoundid");

const buttonP = document.createElement("button");
buttonP.classList.add("buttonS");
buttonP.textContent = "Play Rock Paper Scissors";

playRoundid.appendChild(buttonP);

// initialize scores at 0
const scoreboard = document.querySelector(".scoreboard");
const initHuman = document.createElement("p");
initHuman.classList.add("human");
initHuman.textContent = "Human score: 0";
scoreboard.appendChild(initHuman);
const initComp = document.createElement("p");
initComp.classList.add("comp");
initComp.textContent = "Computer score: 0";
scoreboard.appendChild(initComp);

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