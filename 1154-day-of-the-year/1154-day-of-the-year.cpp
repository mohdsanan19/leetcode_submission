class Solution {
public:
    int dayOfYear(string date) {
        int sum = 0;
        int year = stoi(date.substr(0, 4));
        bool leap = (year % 400 == 0) ||
                (year % 4 == 0 && year % 100 != 0);
        
            if(date[5] == '0' && date[6] == '1'){
                int day = (date[8]-'0')*10 + (date[9]-'0');
                sum += day;
            }else if(date[5] == '0' && date[6] == '2'){
                sum += 31;
                int day = (date[8]-'0')*10 + (date[9]-'0');
                sum += day;
            }else if(date[5] == '0' && date[6] == '3'){
                sum += 59;
                int day = (date[8]-'0')*10 + (date[9]-'0');
                sum += day;
            }else if(date[5] == '0' && date[6] == '4'){
                sum += 90;
                int day = (date[8]-'0')*10 + (date[9]-'0');
                sum += day;
            }else if(date[5] == '0' && date[6] == '5'){
                sum += 120;
                int day = (date[8]-'0')*10 + (date[9]-'0');
                sum += day;
            }else if(date[5] == '0' && date[6] == '6'){
                sum += 151;
                int day = (date[8]-'0')*10 + (date[9]-'0');
                sum += day;
            }else if(date[5] == '0' && date[6] == '7'){
                sum += 181;
                int day = (date[8]-'0')*10 + (date[9]-'0');
                sum += day;
            }else if(date[5] == '0' && date[6] == '8'){
                sum += 212;
                int day = (date[8]-'0')*10 + (date[9]-'0');
                sum += day;
            }else if(date[5] == '0' && date[6] == '9'){
                sum += 243;
                int day = (date[8]-'0')*10 + (date[9]-'0');
                sum += day;
            }else if(date[5] == '1' && date[6] == '0'){
                sum += 273;
                int day = (date[8]-'0')*10 + (date[9]-'0');
                sum += day;
            }else if(date[5] == '1' && date[6] == '1'){
                sum += 304;
                int day = (date[8]-'0')*10 + (date[9]-'0');
                sum += day;
            }else if(date[5] == '1' && date[6] == '2'){
                sum += 334;
                int day = (date[8]-'0')*10 + (date[9]-'0');
                sum += day;
            }else{
                return -1;
            }

        if(leap && (date[5] > '0' || date[6] > '2')){
            sum++;
        }
        
        return sum;
    }
};