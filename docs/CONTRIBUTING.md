# How to Contribute a Feature

1. Create an issue in this repository with a short summary of the feature and any specs you want to write. Summaries and specs are a great way to make sure everyone is on the same page before writing code. No one likes writing a feature only to have to rewrite or scrap it later due to a misunderstanding. Specs also make writing documentation like user guides easier.
1. [Fork this repository](https://help.github.com/en/articles/fork-a-repo) to create your own personal copy of the project. Working in your own forked repository guarantees no one else will mess with the project in unexpected ways during your development (and you won't mess with anyone else either!).
1. If you're going to develop multiple features in your fork, you should [create a branch](https://help.github.com/en/articles/creating-and-deleting-branches-within-your-repository) for each feature. Keeping a single feature per-branch leads to cleaner and easier to understand pull requests.
1. This is the fun part, write your feature!
    1. Please comment your code. This makes it easier for everyone to understand. 
    1. [Doxygen comments](http://www.doxygen.nl/manual/docblocks.html) will be especially appreciated. You can [set up Eclipse](https://stackoverflow.com/a/7590019) to automatically add empty Doxygen templates to functions
    1. You should [run astyle](http://astyle.sourceforge.net/) with [this projects astylerc file](https://github.com/AEFeinstein/Swadge-Devkit-Fw/blob/master/firmware/astylerc) to beautify the code. Everyone loves pretty code.
    1. The code should compile without any warnings.
    1. Try to write small, useful messages in each commit.
1. Test your feature. Try everything, mash buttons, whatever. Get creative. Users certainly will.
1. Once your feature is written and tested, [create a pull request](https://help.github.com/en/articles/creating-a-pull-request) to merge the feature back to the master project. Please reference the ticket from step 1 in the pull request.
1. I'll review the new code and either merge it or request changes. The better the spec and conversation in step 1, the better the chances it gets merged quickly.

# How to Report a Bug

Create an issue in this project with the following information:
* What the expected behavior is.
* What the actual behavior is. Pictures or video could be useful here.
* If repeatable, steps to reproduce the buggy behavior.
* If not repeatable, what you were doing when the bug occurred.
* Serial logs, if you were logging.