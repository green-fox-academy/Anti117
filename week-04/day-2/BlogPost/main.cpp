#include <iostream>
#include <string>
#include <vector>
#include "BlogPost.h"

int main() {

    BlogPost BlogPost0("Lorem Ipsum", "Lorem ipsum dolor sit amet", "John Doe", "2000.05.04");
    std::cout << BlogPost0.getTitle()<<" "<< BlogPost0.getText()<<" "<< BlogPost0.getAuthorName()<<" "<<BlogPost0.getPublicationDate()<<" "<<std::endl;
    BlogPost BlogPost1("Wait but why", "A popular long-form, stick-figure-illustrated blog about almost everything", "Tim Urban", "2010.10.10");
    std::cout << BlogPost1.getTitle()<<" "<< BlogPost1.getText()<<" "<< BlogPost1.getAuthorName()<<" "<<BlogPost1.getPublicationDate()<<" "<<std::endl;
    BlogPost BlogPost2("One Engineer Is Trying to Get IBM to Reckon With Trump", "Daniel Hanley, a cybersecurity engineer at IBM, doesn’t want to be the center of attention. When I asked to take his picture outside one of IBM’s New York City offices, he told me that he wasn’t really into the whole organizer profile thing.", "Willam Turton", "2017.03.28");
    std::cout << BlogPost2.getTitle()<<" "<< BlogPost2.getText()<<" "<< BlogPost2.getAuthorName()<<" "<<BlogPost2.getPublicationDate()<<" "<<std::endl;
    return 0;
}