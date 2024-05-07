#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>



int main()
{
    sf::RenderWindow window(sf::VideoMode(1200, 300), "El Pianito 3");
    
    
    //Keys
    sf::RectangleShape key1(sf::Vector2f(85.7f, 300.f));
    key1.setFillColor(sf::Color::White);
    sf::RectangleShape key2(sf::Vector2f(85.7f, 300.f));
    key2.setFillColor(sf::Color::White);
    key2.setPosition(sf::Vector2f(85.7f, 0.f));
    sf::RectangleShape key3(sf::Vector2f(85.7f, 300.f));
    key3.setFillColor(sf::Color::White);
    key3.setPosition(sf::Vector2f(171.4f, 0.f));
    sf::RectangleShape key4(sf::Vector2f(85.7f, 300.f));
    key4.setFillColor(sf::Color::White);
    key4.setPosition(sf::Vector2f(257.1f, 0.f));
    sf::RectangleShape key5(sf::Vector2f(85.7f, 300.f));
    key5.setFillColor(sf::Color::White);
    key5.setPosition(sf::Vector2f(342.8f, 0.f));
    sf::RectangleShape key6(sf::Vector2f(85.7f, 300.f));
    key6.setFillColor(sf::Color::White);
    key6.setPosition(sf::Vector2f(428.5f, 0.f));
    sf::RectangleShape key7(sf::Vector2f(85.7f, 300.f));
    key7.setFillColor(sf::Color::White);
    key7.setPosition(sf::Vector2f(514.2f, 0.f));
    sf::RectangleShape key8(sf::Vector2f(85.7f, 300.f));
    key8.setFillColor(sf::Color::White);
    key8.setPosition(sf::Vector2f(599.9f, 0.f));
    sf::RectangleShape key9(sf::Vector2f(85.7f, 300.f));
    key9.setFillColor(sf::Color::White);
    key9.setPosition(sf::Vector2f(685.6f, 0.f));
    sf::RectangleShape key10(sf::Vector2f(85.7f, 300.f));
    key10.setFillColor(sf::Color::White);
    key10.setPosition(sf::Vector2f(771.3f, 0.f));
    
    
    //Sharps
    sf::RectangleShape sharp1(sf::Vector2f(42.8f, 200.f));
    sharp1.setFillColor(sf::Color::Black);
    sharp1.setPosition(sf::Vector2f(62.8f, 0.f));
    sf::RectangleShape sharp2(sf::Vector2f(42.8f, 200.f));
    sharp2.setFillColor(sf::Color::Black);
    sharp2.setPosition(sf::Vector2f(148.5f, 0.f));
    sf::RectangleShape sharp3(sf::Vector2f(42.8f, 200.f));
    sharp3.setFillColor(sf::Color::Black);
    sharp3.setPosition(sf::Vector2f(319.9f, 0.f));
    sf::RectangleShape sharp4(sf::Vector2f(42.8f, 200.f));
    sharp4.setFillColor(sf::Color::Black);
    sharp4.setPosition(sf::Vector2f(405.6f, 0.f));
    sf::RectangleShape sharp5(sf::Vector2f(42.8f, 200.f));
    sharp5.setFillColor(sf::Color::Black);
    sharp5.setPosition(sf::Vector2f(491.3f, 0.f));
    sf::RectangleShape sharp6(sf::Vector2f(42.8f, 200.f));
    sharp6.setFillColor(sf::Color::Black);
    sharp6.setPosition(sf::Vector2f(662.7f, 0.f));
    sf::RectangleShape sharp7(sf::Vector2f(42.8f, 200.f));
    sharp7.setFillColor(sf::Color::Black);
    sharp7.setPosition(sf::Vector2f(748.4f, 0.f));
    
    
    //Sounds
    sf::SoundBuffer DOB;
    if (!DOB.loadFromFile("Media/DO.mp3"))
    {
        return -1;
    }
    sf::Sound DO;
    DO.setBuffer(DOB);
    DO.setLoop(false);

    sf::SoundBuffer REB;
    if (!REB.loadFromFile("Media/RE.mp3"))
    {
        return -1;
    }
    sf::Sound RE;
    RE.setBuffer(REB);

    sf::SoundBuffer MIB;
    if (!MIB.loadFromFile("Media/MI.mp3"))
    {
        return -1;
    }
    sf::Sound MI;
    MI.setBuffer(MIB);
    
    sf::SoundBuffer FAB;
    if (!FAB.loadFromFile("Media/FA.mp3"))
    {
        return -1;
    }
    sf::Sound FA;
    FA.setBuffer(FAB);

    sf::SoundBuffer SOLB;
    if (!SOLB.loadFromFile("Media/SOL.mp3"))
    {
        return -1;
    }
    sf::Sound SOL;
    SOL.setBuffer(SOLB);

    sf::SoundBuffer LAB;
    if (!LAB.loadFromFile("Media/LA.mp3"))
    {
        return -1;
    }
    sf::Sound LA;
    LA.setBuffer(LAB);

    sf::SoundBuffer SIB;
    if (!SIB.loadFromFile("Media/SI.mp3"))
    {
        return -1;
    }
    sf::Sound SI;
    SI.setBuffer(SIB);


    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            window.setKeyRepeatEnabled(false);

            //Keypress
            if (event.type == sf::Event::KeyPressed)
            {
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::A))
                {
                    key1.setFillColor(sf::Color(220, 220, 220));
                    DO.play();
                }
                else
                {
                    key1.setFillColor(sf::Color::White);
                }

                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::S))
                {
                    key2.setFillColor(sf::Color(220, 220, 220));
                    RE.play();
                }
                else
                {
                    key2.setFillColor(sf::Color::White);
                }

                if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
                {
                    key3.setFillColor(sf::Color(220, 220, 220));
                    MI.play();
                }
                else
                {
                    key3.setFillColor(sf::Color::White);
                }

                if (sf::Keyboard::isKeyPressed(sf::Keyboard::F))
                {
                    key4.setFillColor(sf::Color(220, 220, 220));
                    FA.play();
                }
                else
                {
                    key4.setFillColor(sf::Color::White);
                }

                if (sf::Keyboard::isKeyPressed(sf::Keyboard::G))
                {
                    key5.setFillColor(sf::Color(220, 220, 220));
                    SOL.play();
                }
                else
                {
                    key5.setFillColor(sf::Color::White);
                }

                if (sf::Keyboard::isKeyPressed(sf::Keyboard::H))
                {
                    key6.setFillColor(sf::Color(220, 220, 220));
                    LA.play();
                }
                else
                {
                    key6.setFillColor(sf::Color::White);
                }

                if (sf::Keyboard::isKeyPressed(sf::Keyboard::J))
                {
                    key7.setFillColor(sf::Color(220, 220, 220));
                    SI.play();
                }
                else
                {
                    key7.setFillColor(sf::Color::White);
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::K))
                {
                    key8.setFillColor(sf::Color(220, 220, 220));
                }
                else
                {
                    key8.setFillColor(sf::Color::White);
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::L))
                {
                    key9.setFillColor(sf::Color(220, 220, 220));
                }
                else
                {
                    key9.setFillColor(sf::Color::White);
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Semicolon))
                {
                    key10.setFillColor(sf::Color(220, 220, 220));
                }
                else
                {
                    key10.setFillColor(sf::Color::White);
                }
            }
         


            //Sharps
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
            {
                sharp1.setFillColor(sf::Color(120, 120, 120));
            }
            else
            {
                sharp1.setFillColor(sf::Color::Black);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::E))
            {
                sharp2.setFillColor(sf::Color(120, 120, 120));
            }
            else
            {
                sharp2.setFillColor(sf::Color::Black);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::T))
            {
                sharp3.setFillColor(sf::Color(120, 120, 120));
            }
            else
            {
                sharp3.setFillColor(sf::Color::Black);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Y))
            {
                sharp4.setFillColor(sf::Color(120, 120, 120));
            }
            else
            {
                sharp4.setFillColor(sf::Color::Black);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::U))
            {
                sharp5.setFillColor(sf::Color(120, 120, 120));
            }
            else
            {
                sharp5.setFillColor(sf::Color::Black);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::O))
            {
                sharp6.setFillColor(sf::Color(120, 120, 120));
            }
            else
            {
                sharp6.setFillColor(sf::Color::Black);
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::P))
            {
                sharp7.setFillColor(sf::Color(120, 120, 120));
            }
            else
            {
                sharp7.setFillColor(sf::Color::Black);
            }


        }
       
        window.clear();
        window.draw(key1);
        window.draw(key2);
        window.draw(key3);
        window.draw(key4);
        window.draw(key5);
        window.draw(key6);
        window.draw(key7);
        window.draw(key8);
        window.draw(key9);
        window.draw(key10);
        window.draw(sharp1);
        window.draw(sharp2);
        window.draw(sharp3);
        window.draw(sharp4);
        window.draw(sharp5);
        window.draw(sharp6);
        window.draw(sharp7);
        window.display();
    }

    return 0;
}