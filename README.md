#We Wish You a Merry Arduino#
##A library for orchestrating household lights to the tune of "We Wish You A Merry Xmas"##

I wrote this two years ago, so forgive the poor organization.  I wrote it by hand originally to control eight lights for the eight notes of the song, with nothing but delay() and digitalWrite() functions.  In retrospect this deserves some organization, but for now, it's what I want.

In the area before setup() you can see how I've designated my three relays to the eight notes, so each one represents some number of the notes.  For example, pin 8 is the lowest note, and it is the "root" of the song, so it naturally deserves the largest light display.

The rest I tried to balance between the two trees we rigged up, right now it's wired for a 3-relay version, but if you'd make a different number of light version, please send a pull request, we could have a file for any number of light circuits, eh?

Anyways, you can see this version in action [on youtube here](http://www.youtube.com/watch?v=PQRmJ2LoKmU&feature=youtu.be).