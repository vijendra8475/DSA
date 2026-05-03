var lengthOfLastWord = function(s) {
    let len = s.length;
    var word = s.trim().split(/\s+/)
    console.log(word);
    
    word = word[word.length-1]
    console.log(word.length);
    
    return word.length;
};

console.log(lengthOfLastWord("   fly me   to   the moon  "));
