import pymorphy2
import os
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
    THIS_FOLDER = os.path.dirname(os.path.abspath(__file__))
    pos_file_path = os.path.join(THIS_FOLDER, pos_filename)
    pos_fin = open(pos_file_path, 'r')
    separator = ";"
    line = pos_fin.readline()
    pos_list = line.split(separator)
    pos_fin.close()
    return pos_list

def detect_parts_of_speech():
    morph = pymorphy2.MorphAnalyzer()
    pos_list = read_needed_pos_list('needed_pos.csv')
    THIS_FOLDER = os.path.dirname(os.path.abspath(__file__))
    buff_inp_file = os.path.join(THIS_FOLDER, "buffer_text.txt")
    fin = open(buff_inp_file, encoding = 'utf-8')
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
            a = morph.parse(word)[0]
            if a.tag.POS in pos_list:
                tag = a.tag.POS
                word += "</" + tag.lower() + ">"
                if is_any_punctuation == True:
                    word = word + punctuation_mark
                string = string + '<' + tag.lower() + '>'  + word + ' '
            else:
                if is_any_punctuation == True:
                    word = word + punctuation_mark
                string = string + word + ' '
        string = string + '\n'
        an_text.append(string)
    fin.close()
    buff_out_file = os.path.join(THIS_FOLDER, "buffer_analysed_text.txt")
    fout = open(buff_out_file, 'w', encoding = 'utf-8')
    for line in an_text:
        fout.write(line)
    fout.close()


def main():

    detect_parts_of_speech()  # вызываем основную функцию

if __name__ == "__main__":
    main()



