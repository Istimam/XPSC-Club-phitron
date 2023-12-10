{
	// Place your snippets for cpp here. Each snippet is defined under a snippet name and has a prefix, body and 
	// description. The prefix is what is used to trigger the snippet and the body will be expanded and inserted. Possible variables are:
	// $1, $2 for tab stops, $0 for the final cursor position, and ${1:label}, ${2:another} for placeholders. Placeholders with the 
	// same ids are connected.
	// Example:
	// "Print to console": {
	// 	"prefix": "log",
	// 	"body": [
	// 		"console.log('$1');",
	// 		"$2"
	// 	],
	// 	"description": "Log output to console"
	// }
	"1": {
		"prefix": "cpp",
		"body": [
		  "#include<bits/stdc++.h>",
		  "#define For(i,A,B) for(int i = A; i < B; i++)",
		  "#define nl '\\n'",
		  "#define ll long long",
		  "const int MOD = 1e9 + 7;",
		  "using namespace std;",
		  "int main()",
		  "{",
		  "    $0",
		  "    return 0;",
		  "}"
		],
		"description": ""
	  },
	  "2": {
		"prefix": "node",
		"body": [
		  "class ListNode",
		  "{",
		  "    public:",
		  "        int val;",
		  "        ListNode* next;",
		  "    ListNode(int val)",
		  "    {",
		  "        this->val = val;",
		  "        this->next = NULL;",
		  "    }",
		  "};"
		],
		"description": ""
	  },
	  "3": {
		"prefix": "dlnode",
		"body": [
		  "class Node",
		  "{",
		  "    public:",
		  "        int val;",
		  "        Node* next;",
		  "        Node* prev;",
		  "    Node(int val)",
		  "    {",
		  "        this->val = val;",
		  "        this->next = NULL;",
		  "        this->prev = NULL;",
		  "    }",
		  "};"
		],
		"description": ""
	  },
	  "4": {
		"prefix": "bnode",
		"body": [
		  "class Node",
		  "{",
		  "    public:",
		  "        int val;",
		  "        Node* left;",
		  "        Node* right;",
		  "    Node(int val)",
		  "    {",
		  "        this->val = val;",
		  "        this->left = NULL;",
		  "        this->right = NULL;",
		  "    }",
		  "};"
		],
		"description": ""
	  },
	"5":{
	"prefix": "cppt",
	"body": [
		"#include<bits/stdc++.h>",
		"#define For(i,A,B) for(int i = A; i < B; i++)",
		"#define nl '\\n'",
		"#define ll long long",
		"const int MOD = 1e9 + 7;",
		"using namespace std;",
		"void solve()",
		"{",
		"    ",
		"}",
		"int main()",
		"{",
		"    int t;",
		"    cin >> t;",
		"    while (t--)",
		"    {",
		"        solve();",
		"    }",
		"    return 0;",
		"}"
		],
		"description": ""
	},
	"6": {
  "prefix": "contest",
  "body": [
    "#include<bits/stdc++.h>",
    "#define For(i,A,B) for(int i = A; i < B; i++)",
    "#define nl '\\n'",
    "#define ll long long",
    "const int MOD = 1e9 + 7;",
    "using namespace std;",
    "bool isSemiPalindrome(string str) ",
    "{",
    "    unordered_map<char, int> charCount;",
    "    for (char ch : str) {",
    "        charCount[ch]++;",
    "    }",
    "    int oddCount = 0;",
    "    for (auto pair : charCount) {",
    "        if (pair.second % 2 != 0) {",
    "            oddCount++;",
    "        }",
    "    }",
    "    return oddCount <= 1;",
    "}",
    "ll power(ll x,ll MOD,ll n)",
    "{",
    "    if(n == 0)",
    "        return 1;",
    "    else if(n == 1)",
    "        return x;",
    "    else if(n&1)",
    "        return (x * power((x * x) % MOD, MOD, n / 2)) % MOD;",
    "    else",
    "        return (power((x * x) % MOD, MOD, n / 2));",
    "} ",
    "void solve()",
    "{",
    "    ",
    "}",
    "int main()",
    "{",
    "    int t;",
    "    cin >> t;",
    "    while (t--)",
    "    {",
    "        solve();",
    "    }",
    "    return 0;",
    "}"
  ],
  "description": ""
}
}