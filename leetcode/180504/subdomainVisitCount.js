/* the answer for #811 subdomain visit count*/
/**
 * @param {string[]} cpdomains
 * @return {string[]}
 */

var test = ["900 google.mail.com", "50 yahoo.com", "1 intel.mail.com", "5 wiki.org"];

var subdomainVisits = function(cpdomains) {
	/* {string[]}
		domainVisit[i][0]: number of visit
		domainVisit[i][1]: the domain to visit */
	let domainVisitList = new Array;
    for (let i=0; i<cpdomains.length; i++){
    	// split to the number and domain
    	let cpdomain = cpdomains[i].split(" ");

    	// split the domain by "."
    	cpdomain[1] = cpdomain[1].split(".");

    	// create the domain and compare whether visit the exisiting domain
    	let domainName = "";
    	for (let j=cpdomain[1].length-1; j>=0; j--) {
    		domainName = cpdomain[1][j] + domainName;

    		// if there is already domain name exist in the list, add the visit counter
    		// if not, add a new domain name to the list
    		let exist = 0;
    		for (let k=0; k<domainVisitList.length; k++) {
    			if(domainVisitList[k][1] == domainName) {
    				exist = 1;
    				domainVisitList[k][0] += parseInt(cpdomain[0]);
    			}
    		}
    		if(!exist){
    			let newIndex = domainVisitList.length;
    			domainVisitList[newIndex] = new Array;
    			domainVisitList[newIndex][0] = parseInt(cpdomain[0]);
    			domainVisitList[newIndex][1] = domainName;
    		}
    		domainName = "." + domainName;
    	}
    }

    // return the value
    let ans = new Array;
    for (let i=0; i<domainVisitList.length; i++) {
    	ans[i] = domainVisitList[i][0] + " " + domainVisitList[i][1];
    }

    return ans;
};