/* The answer for #520.Detect Capital*/
/**
 * @param {string} word
 * @return {boolean}
 */
var detectCapitalUse = function(word) {
    let ans = false;
    // see if the word is all capitals
    if(word === word.toUpperCase()) {
    	ans = true;
    }

    // see if the word is all non capitals
    if(word === word.toLowerCase()) {
    	ans = true;
    }

    // Only first character is capital
    if(word[0] === word[0].toUpperCase()) {
    	let myString = word.slice(1);
    	if(myString === myString.toLowerCase()) {
    		ans = true;
    	}
    }

    return ans;
};

var test = function() {
	let test = "USA";
	console.log(detectCapitalUse(test));

	test = "FlaG";
	console.log(detectCapitalUse(test));

	test = "Google";
	console.log(detectCapitalUse(test));
}

test();