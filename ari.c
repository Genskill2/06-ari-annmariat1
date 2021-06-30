#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
string ari(string s){
      int characters = 0;
      int words = 0;
      int sentences = 0;
      int score;
      float index;
      string gradelevel;
      for(int i = 0; (int) s[i] != 0; i++){
            if(isalnum(s[i])){
               characters ++;
               }
            if(s[i] == ' '){
               words ++;
               }
            if(s[i] == '.' || s[i] == '!' || s[i] == '?'){
               sentences ++;
               }
           }
      index = (4.71*(float)characters/(float)words) + (0.5*(float)words/(float)sentences) - 21.43;
      score = index;
      if(index/score > 1){
          score++;}
          
      typedef struct {
        int scores;
        char *grade;
        } scale;
   
   
   
   
       scale p[14]={
             {.scores = 1, .grade = "Kindergarten",},
             {.scores = 2, .grade = "First/Second Grade",},
             {.scores = 3, .grade = "Third Grade",},
             {.scores = 4, .grade = "Fourth Grade",},
             {.scores = 5, .grade = "Fifth Grade",},
             {.scores = 6, .grade = "Sixth Grade",},
             {.scores = 7, .grade = "Seventh Grade",},
             {.scores = 8, .grade = "Eighth Grade",},
             {.scores = 9, .grade = "Ninth Grade",},
             {.scores = 10, .grade = "Tenth Grade",},
             {.scores = 11, .grade = "Eleventh Grade",},
             {.scores = 12, .grade = "Twelfth grade",},
             {.scores = 13, .grade = "College student"},
             {.scores = 14, .grade = "Professor"}
               };
               
      gradelevel = p[score-1].grade;
      return gradelevel;
      
      }
    
