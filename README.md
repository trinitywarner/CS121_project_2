# CS121_project_2

## Algorithm, Guess the number game
# Follow along source: Introduction to C Guesser Game

main();
    make 5 length char array userName
    make integer called guess, intitalize -999 (?)
    make integer called correct, randomly generated
    make integer called turns, intitialize to 0 (?)
    make integer treating as boolean, called keepGoing start true (-1)

    seed random number generator
    generate random number between 1 and 100 in correct
    ask user name put in userName
    greet user with name

    while keepGoing is true;
        increment turns
        ask user for a number and put in guess
        if guess is greater than correct;
            say too high
        else if guess is less than correct;
            say too low
        else;
            say woohoo
            set keepGoing to false

    evaluate the performence
    if turns is greater than 7;
        say great
    if turns is less than 7'
        say not bad
    else;
        say great job

# Personal-ish attempt...

main()
    10 length char array name
    integer called guess, start value -999
    integer called correct, random generated
    integer turns, start value 0
    integer like boolean, called keepGoing starting as true (-1)

    insert random number generator 
    generate random number between 1-100 in correct
    ask name put in name
    greet user with name

    while keepGoing is true
        increment turns
        ask user for number, put in guess
        if guess greater than correct
            say too high
        if guess less than correct
            say too low
        else
            say winner winner chicken diner
            set keepGoing to false

    feedback
    if turns greater than 7
        say hmmm
    if turns less than 7
        say not bad but not good
    else
        say youll do better next time

