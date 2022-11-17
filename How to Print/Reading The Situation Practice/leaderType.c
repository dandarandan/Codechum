#include <stdio.h>
int main(void) {

    int result = 0;
    char answer;
    char answerSheet[12];

    for (int i = 0; i < 12; i++)
    {
        printf("%d. A, B, C?\n", i+1);
        scanf(" %c", &answer);

        if (answer == 'a' || answer == 'A')
        {
            result+=1;
            answerSheet[i] = answer;
        }
        else if (answer == 'b' || answer == 'B')
        {
            result+=2;
            answerSheet[i] = answer;
        }
        else
        {
            result+=3;
            answerSheet[i] = answer;
        }
    }

    printf("\nTally of Answers:\n");
    for (int a = 0; a < 12; a++)
    {
        printf("\n%d. %c", a+1, answerSheet[a]);
    }
    printf("\n\nTotal: %d", result);

    if (result <= 20)
    {
        printf("\nYou most commonly adopt an authoritarian or autocratic leadership style.\nYou rarely consult your team members and, instead, tend to tell them what you want, when you want it, and how you want it done");
        printf("\nThis style works well in a crisis, when a task must be completed quickly. However, you'll likely demoralize, demotivate and aggravate people if you use it all the time.");
        printf("\nThis can translate into high absenteeism and turnover rates. You'll also miss out on a wealth of ideas, thereby stifling innovation and creativity.");

    }
    else if (result >= 21 && result <= 27)
    {
        printf("\nYou lean toward a democratic or paticipative style of leadership. \nYou tend to set the parameterse for the work and have the final say on decisions, but you actively involve your team members in the process");
        printf("\nThis style can build trust between you and your people, as they'll likely feel engaged and valued.");
        printf("\nBut it's not great in a high pressure situation that requires a fast turnaround, as it will slow you down.");
        printf("\nAnd, if you dislike disagreement or conflict, you might struggle with how people respond to consultation.");
    }
    else
    {
        printf("\nYour default leadership style is probably delegating or \"laissez faire\". You give your team members free rein in how they work toward their goals.");
        printf("\nThis is an ideal approach when your people are highly skilled and motived, and when you're working with contractors and freelancers who you trust.");
        printf("\nBut if a team member is inexperienced or untrustworthy, or if you lose sigh of what's going on, this approach can backfire catastrophically.");
    }

    return 0;
}