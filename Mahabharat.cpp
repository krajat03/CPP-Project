#include <iostream>
using namespace std;
class Mahabharat
{
public:
    string name;
    void character_input()
    {

        cout << "Characters:- " << endl;
        cout << "1. kuruvansh" << endl;
        cout << "2. shantanu" << endl;
        cout << "3. bhishma" << endl;
        cout << "4. chitrangada" << endl;
        cout << "5. vichitravirya" << endl;
        cout << "6. dhritarashtra" << endl;
        cout << "7. pandu" << endl;
        cout << "8. karna" << endl;
        cout << "9. yudhishthira" << endl;
        cout << "10. bhima" << endl;
        cout << "11. arjuna" << endl;
        cout << "12. sahadeva" << endl;
        cout << "13. abhimanyu" << endl;
        cout << "14. shantanu" << endl;
        cout << "15. shakuni" << endl;
        cout << "Enter the character's name or its corresponding serial number:- ";
        getline(cin, name);
    }

    void charcter_output()
    {
        if (name == "kuruvansh" || name == "1")
        {
            cout << "Kuruvansh:- " << endl;
            cout << "# Origin:- " << endl
                 << "---> The Kuru dynasty originated in the Vedic period around 1200 to 900 BCE," << endl;
            cout << "     when the Puru and Bharata clans merged after the battle of the ten kings." << endl;
            cout << "---> The extent of the Kuru Empire included present-day Delhi, Haryana, Punjab and the western part of" << endl;
            cout << "     Uttar Pradesh (the region of Doab, up to Prayag)." << endl;
            cout << "---> Some kings of the Kuru dynasty include Shantanu, Pandu, Dhritarashtra, and Khemaka. " << endl;
        }
        else if (name == "shantanu" || name == "2")
        {
            cout << "Shantanu:- " << endl;
            cout << "* Father:- Pratipa" << endl;
            cout << "* Mother:- Sunanda" << endl;
            cout << "* King  :- 19th" << endl;
            cout << "* Wife  :- Satyavati, Ganga" << endl;
            cout << "* Children: - 2 (Satyavati) + 8 (Ganga)" << endl;
            cout << "* Children names:- Chitrangada, Vichitravirya (Satyavati) and Bhishma (Ganga)" << endl;
        }
        else if (name == "bhishma" || name == "3")
        {
            cout << "Bhishma:- " << endl;
            cout << "* Father:- Shantanu" << endl;
            cout << "* Mother:- Ganga" << endl;
            cout << "* Wife  :- No" << endl;
            cout << "* Known for:- Vow of celibacy, Devotion to Kuru throne" << endl;
            cout << "* Titles:- Gangaputra, Devavrata" << endl;
        }
        else if (name == "chitrangada" || name == "4")
        {
            cout << "Chitrangada:- " << endl;
            cout << "* Father:- Shantanu" << endl;
            cout << "* Mother:- Satyavati" << endl;
            cout << "* Wife  :- No" << endl;
            cout << "* Known for:- Elder son of Shantanu and King of Hastinapura" << endl;
        }
        else if (name == "vichitravirya" || name == "5")
        {
            cout << "Vichitravirya:- " << endl;
            cout << "* Father:- Shantanu" << endl;
            cout << "* Mother:- Satyavati" << endl;
            cout << "* Wife  :- Ambika, Ambalika" << endl;
            cout << "* Children:- Dhritarashtra (Ambika) + Pandu (Ambalika)" << endl;
            cout << "* Known for:- King of Hastinapura after Chitrangada's death" << endl;
        }
        else if (name == "dhritarashtra" || name == "6")
        {
            cout << "Dhritarashtra:- " << endl;
            cout << "* Father:- Vichitravirya" << endl;
            cout << "* Mother:- Ambika" << endl;
            cout << "* Wife  :- Gandhari" << endl;
            cout << "* Brother in law:- Shakuni " << endl;
            cout << "* Children:- 100 (Kauravas, Duryodhana, Dushala, Dushasana)" << endl;
            cout << "* Known for:- Being blind from birth, King of Hastinapura" << endl;
        }

        else if (name == "pandu" || name == "7")
        {
            cout << "Pandu:- " << endl;
            cout << "* Father:- Vichitravirya" << endl;
            cout << "* Mother:- Ambalika" << endl;
            cout << "* Wife  :- Kunti, Madri" << endl;
            cout << "* Children:- 5 (Yudhishthira, Bhima, Arjuna (Kunti) + Nakula, Sahadeva (Madri))" << endl;
            cout << "* Known for:- Father of the Pandavas" << endl;
        }

        else if (name == "karna" || name == "8")
        {
            cout << "Karna:- " << endl;
            cout << "* Father:- Surya (Sun God)" << endl;
            cout << "* Mother:- Kunti" << endl;
            cout << "* Wife  :- Vrushali" << endl;
            cout << "* Titles:- Radheya, Vasusena, Angaraja" << endl;
            cout << "* Known for:- Great warrior, friend of Duryodhana, Archer" << endl;
        }
        else if (name == "yudhishthira" || name == "9")
        {
            cout << "Yudhishthira:- " << endl;
            cout << "* Father:- Pandu" << endl;
            cout << "* Mother:- Kunti" << endl;
            cout << "* Wife  :- Draupadi, Devika" << endl;
            cout << "* Children:- Prativindhya (Draupadi), Yaudheya (Devika)" << endl;
            cout << "* Known for:- Eldest Pandava, Upholder of Dharma, King of Indraprastha and Hastinapura" << endl;
            cout << "* Titles:- Dharmaraja, Ajatashatru" << endl;
        }
        else if (name == "bhima" || name == "10")
        {
            cout << "Bhima:- " << endl;
            cout << "* Father:- Pandu" << endl;
            cout << "* Mother:- Kunti" << endl;
            cout << "* Wife  :- Hidimbi, Draupadi, Balandhara" << endl;
            cout << "* Children:- Ghatotkacha (Hidimbi), Sutasoma (Draupadi)" << endl;
            cout << "* Known for:- Immense strength, Warrior, Second Pandava" << endl;
            cout << "* Titles:- Vrikodara" << endl;
        }
        else if (name == "arjuna:- " || name == "11")
        {
            cout << "Arjuna:- " << endl;
            cout << "* Father:- Pandu" << endl;
            cout << "* Mother:- Kunti" << endl;
            cout << "* Wife  :- Draupadi, Subhadra, Ulupi, Chitrangada" << endl;
            cout << "* Children:- Shrutakarma (Draupadi), Abhimanyu (Subhadra), Iravan (Ulupi), Babruvahana (Chitrangada)" << endl;
            cout << "* Known for:- Great archer, Warrior, Third Pandava" << endl;
            cout << "* Titles:- Partha, Dhananjaya, Gudakesha" << endl;
        }
        else if (name == "nakula" || name == "12")
        {
            cout << "Nakula:- " << endl;
            cout << "* Father:- Pandu" << endl;
            cout << "* Mother:- Madri" << endl;
            cout << "* Wife  :- Draupadi, Karenumati" << endl;
            cout << "* Children:- Shatanika (Draupadi)" << endl;
            cout << "* Known for:- Swordsmanship, Fourth Pandava" << endl;
            cout << "* Titles:- Ashvineya" << endl;
        }
        else if (name == "sahadeva" || name == "13")
        {
            cout << "Sahadeva:- " << endl;
            cout << "* Father:- Pandu" << endl;
            cout << "* Mother:- Madri" << endl;
            cout << "* Wife  :- Draupadi, Vijaya" << endl;
            cout << "* Children:- Shrutasena (Draupadi)" << endl;
            cout << "* Known for:- Astrology, Wisdom, Fifth Pandava" << endl;
            cout << "* Titles:- Ashvineya" << endl;
        }
        else if (name == "abhimanyu" || name == "14")
        {
            cout << "Abhimanyu:- " << endl;
            cout << "* Father:- Arjuna" << endl;
            cout << "* Mother:- Subhadra" << endl;
            cout << "* Wife  :- Uttara" << endl;
            cout << "* Children:- Parikshit" << endl;
            cout << "* Known for:- Warrior in the Kurukshetra war, Breaking the Chakravyuha" << endl;
            cout << "* Titles:- Saubhadra" << endl;
        }
        else if (name == "shakuni" || name == "15")
        {
            cout << "Shakuni:- " << endl;
            cout << "* Father:- Subala" << endl;
            cout << "* Mother:- Sudharma" << endl;
            cout << "* Sister:- Gandhari" << endl;
            cout << "* Known for:- Master strategist, Politician, Brother-in-law to Dhritarashtra" << endl;
            cout << "* Titles:- Prince of Gandhara" << endl;
            cout << "* Notable for:- Devising plans against the Pandavas, Instigating the Kauravas" << endl;
        }
        else
        {
            cout << "Character not found in the Mahabharat database!" << endl;
        }
    }
};
int main()
{
    Mahabharat character;
    character.character_input();
    character.charcter_output();

    return 0;
}