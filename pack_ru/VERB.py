import pymorphy2
import warnings
warnings.filterwarnings("ignore", category=DeprecationWarning)

punctuation_marks = [
    '.',
    ':',
    ';',
    ',',
    '?',
    '!',
    '\"',
    '\'',
]

def read_needed_pos_list(pos_filename):
    pos_fin = open(pos_filename, 'r', encoding = 'utf-8')
    separator = ";"
    line = pos_fin.readlines()
    pos_list = line.split(separator)
    pos_fin.close()
    return pos_list

def detect_parts_of_speech():
    morph = pymorphy2.MorphAnalyzer()
    pos_list = read_needed_pos_list("needed_pos.csv")
    fin = open("buffer_text.txt", 'r', encoding = 'utf-8')
    text = fin.readlines()
    an_text = []
    for line in text:
        string = ''
        line = line.split()
        for word in line:
            is_any_punctuation = False
            if word[len(word)-1] in punctuation_marks:
                is_any_punctuation = True
                punctuation_mark = word[len(word)-1]
                word = word.strip(word[len(word)-1])
            a = morph.parse(word)
            if a[0][1].POS in pos_list:
                word = word.upper()
                word += "</" + a[0][1].POS + ">"
                if is_any_punctuation == True:
                    word = word + '.'
                string = string + '<' + a[0][1].POS + '>'  + word + ' '
            else:
                if is_any_punctuation == True:
                    word = word + punctuation_mark
                string = string + word + ' '
        string = string + '\n'
        an_text.append(string)
    fin.close()
    fout = open('outbuf.txt', 'w', encoding = 'utf-8')
    for line in an_text:
        fout.write(line)
    fout.close()


def main():

    detect_parts_of_speech()  # вызываем основную функцию

if __name__ == "__main__":
    main()



