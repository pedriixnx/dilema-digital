/* =========================================
   RESET E CONFIGURAÇÕES GERAIS
========================================= */

* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
    scroll-behavior: smooth;
}

html {
    scroll-padding-top: 80px;
}

body {
    font-family: Arial, Helvetica, sans-serif;
    background: #080812;
    color: #ffffff;
    line-height: 1.6;
    overflow-x: hidden;
}

a {
    text-decoration: none;
    color: inherit;
}

button {
    font-family: inherit;
}

.container {
    width: 90%;
    max-width: 1200px;
    margin: 0 auto;
}


/* =========================================
   MENU
========================================= */

header {
    position: fixed;
    top: 0;
    left: 0;
    width: 100%;
    height: 75px;
    z-index: 1000;

    background: rgba(8, 8, 18, 0.85);
    backdrop-filter: blur(15px);

    border-bottom: 1px solid rgba(255, 255, 255, 0.08);
}

nav {
    height: 75px;

    display: flex;
    align-items: center;
    justify-content: space-between;
}

.logo {
    font-size: 24px;
    font-weight: 800;
    letter-spacing: 1px;

    color: #8b5cf6;
}

.logo span {
    color: #22d3ee;
}

.menu {
    display: flex;
    align-items: center;
    gap: 25px;

    list-style: none;
}

.menu a {
    position: relative;

    color: #d1d1db;
    font-size: 14px;

    transition: 0.3s;
}

.menu a::after {
    content: "";

    position: absolute;
    left: 0;
    bottom: -7px;

    width: 0;
    height: 2px;

    background: linear-gradient(
        90deg,
        #8b5cf6,
        #22d3ee
    );

    transition: 0.3s;
}

.menu a:hover {
    color: #ffffff;
}

.menu a:hover::after {
    width: 100%;
}


/* =========================================
   HERO
========================================= */

.hero {
    min-height: 100vh;

    display: flex;
    align-items: center;
    justify-content: center;

    position: relative;
    overflow: hidden;

    text-align: center;

    background:
        radial-gradient(
            circle at 20% 30%,
            rgba(139, 92, 246, 0.25),
            transparent 30%
        ),
        radial-gradient(
            circle at 80% 70%,
            rgba(34, 211, 238, 0.18),
            transparent 30%
        ),
        #080812;
}

/* círculos decorativos */

.hero::before,
.hero::after {
    content: "";

    position: absolute;

    border-radius: 50%;

    filter: blur(2px);

    animation: floating 7s ease-in-out infinite;
}

.hero::before {
    width: 250px;
    height: 250px;

    top: 15%;
    left: 5%;

    border: 1px solid rgba(139, 92, 246, 0.2);
}

.hero::after {
    width: 350px;
    height: 350px;

    right: -100px;
    bottom: -100px;

    border: 1px solid rgba(34, 211, 238, 0.15);

    animation-delay: 2s;
}

.hero-content {
    position: relative;
    z-index: 2;
}

.hero h1 {
    font-size: clamp(55px, 10vw, 120px);

    line-height: 0.95;

    text-transform: uppercase;

    letter-spacing: 5px;

    margin-bottom: 30px;

    background: linear-gradient(
        90deg,
        #8b5cf6,
        #22d3ee
    );

    -webkit-background-clip: text;
    background-clip: text;

    color: transparent;

    animation: titleAppear 1s ease forwards;
}

.hero p {
    max-width: 750px;

    margin: 0 auto;

    font-size: 20px;

    color: #c7c7d1;

    animation: fadeUp 1s ease 0.3s forwards;

    opacity: 0;
}

.hero-button {
    display: inline-block;

    margin-top: 35px;

    padding: 15px 30px;

    border-radius: 30px;

    background: linear-gradient(
        90deg,
        #7c3aed,
        #0891b2
    );

    font-weight: bold;

    transition: 0.3s;

    animation: fadeUp 1s ease 0.5s forwards;

    opacity: 0;
}

.hero-button:hover {
    transform: translateY(-5px) scale(1.03);

    box-shadow:
        0 10px 35px rgba(34, 211, 238, 0.25);
}


/* =========================================
   SEÇÕES
========================================= */

section {
    padding: 100px 0;
}

.section-title {
    text-align: center;

    margin-bottom: 50px;
}

.section-title h2 {
    font-size: 40px;

    margin-bottom: 10px;
}

.section-title p {
    color: #9ca3af;
}


/* =========================================
   SOBRE
========================================= */

.about {
    background: #0c0c18;
}

.about-content {
    max-width: 900px;

    margin: 0 auto;

    text-align: center;
}

.about-content p {
    font-size: 18px;

    color: #c7c7d1;
}

.highlight {
    color: #22d3ee;

    font-weight: bold;
}


/* =========================================
   CARDS
========================================= */

.cards {
    display: grid;

    grid-template-columns:
        repeat(3, 1fr);

    gap: 25px;
}

.card {
    position: relative;

    background:
        linear-gradient(
            145deg,
            #151526,
            #0e0e19
        );

    border: 1px solid rgba(255, 255, 255, 0.08);

    border-radius: 18px;

    padding: 30px;

    overflow: hidden;

    transition:
        transform 0.3s,
        border-color 0.3s,
        box-shadow 0.3s;
}

.card::before {
    content: "";

    position: absolute;

    top: 0;
    left: -100%;

    width: 100%;
    height: 2px;

    background: linear-gradient(
        90deg,
        #8b5cf6,
        #22d3ee
    );

    transition: 0.5s;
}

.card:hover::before {
    left: 0;
}

.card:hover {
    transform: translateY(-8px);

    border-color: rgba(139, 92, 246, 0.5);

    box-shadow:
        0 15px 40px rgba(0, 0, 0, 0.35);
}

.card-icon {
    font-size: 42px;

    margin-bottom: 20px;
}

.card h3 {
    margin-bottom: 12px;

    font-size: 21px;
}

.card p {
    color: #a9a9b5;
}


/* =========================================
   INTELIGÊNCIA ARTIFICIAL
========================================= */

.ai-section {
    background:
        radial-gradient(
            circle at center,
            rgba(124, 58, 237, 0.12),
            transparent 55%
        ),
        #080812;
}

.ai-box {
    max-width: 900px;

    margin: auto;

    padding: 40px;

    border-radius: 20px;

    background:
        linear-gradient(
            145deg,
            #151526,
            #0e0e19
        );

    border: 1px solid rgba(139, 92, 246, 0.4);

    box-shadow:
        0 20px 60px rgba(0, 0, 0, 0.25);
}

.ai-box h3 {
    margin-bottom: 10px;
}

.ai-box ul {
    margin-top: 15px;

    padding-left: 25px;
}

.ai-box li {
    margin-bottom: 10px;

    color: #c7c7d1;
}


/* =========================================
   DILEMA INTERATIVO
========================================= */

.dilema {
    background: #0c0c18;
}

.question-box {
    max-width: 800px;

    margin: auto;

    text-align: center;

    padding: 50px 30px;

    border-radius: 25px;

    background:
        linear-gradient(
            145deg,
            #151526,
            #0e0e19
        );

    border: 1px solid rgba(34, 211, 238, 0.2);

    box-shadow:
        0 20px 60px rgba(0, 0, 0, 0.3);
}

.question-box h3 {
    font-size: 27px;

    margin-bottom: 30px;
}

.choices {
    display: flex;

    flex-direction: column;

    gap: 15px;
}

.choice {
    border: 1px solid transparent;

    padding: 17px;

    border-radius: 12px;

    background: #1b1b2d;

    color: white;

    cursor: pointer;

    font-size: 16px;

    transition: 0.3s;
}

.choice:hover {
    background: #7c3aed;

    transform: scale(1.02);

    border-color: #a78bfa;
}

.choice:active {
    transform: scale(0.98);
}

#resultado {
    margin-top: 25px;

    padding: 15px;

    font-size: 17px;

    color: #22d3ee;

    font-weight: bold;

    min-height: 30px;

    border-radius: 10px;

    transition: 0.3s;
}


/* =========================================
   DICAS
========================================= */

.tips {
    display: grid;

    grid-template-columns:
        repeat(2, 1fr);

    gap: 20px;

    max-width: 900px;

    margin: auto;
}

.tip {
    padding: 25px;

    background: #11111f;

    border-radius: 15px;

    border-left: 4px solid #22d3ee;

    transition: 0.3s;
}

.tip:hover {
    transform: translateX(5px);

    background: #151526;
}

.tip h3 {
    margin-bottom: 8px;
}

.tip p {
    color: #a9a9b5;
}


/* =========================================
   CONCLUSÃO
========================================= */

.conclusion {
    text-align: center;

    background:
        radial-gradient(
            circle at center,
            rgba(124, 58, 237, 0.2),
            transparent 50%
        ),
        #080812;
}

.conclusion p {
    max-width: 800px;

    margin: auto;

    font-size: 20px;

    color: #c7c7d1;
}

.final-text {
    margin-top: 30px;

    font-size: 28px !important;

    font-weight: bold;

    color: white !important;
}


/* =========================================
   RODAPÉ
========================================= */

footer {
    padding: 30px;

    text-align: center;

    background: #05050b;

    color: #777;

    border-top:
        1px solid rgba(255, 255, 255, 0.05);
}

footer p {
    margin: 5px;
}

footer span {
    color: #8b5cf6;
}


/* =========================================
   ANIMAÇÕES DE SCROLL
========================================= */

.fade {
    opacity: 0;

    transform: translateY(30px);

    transition:
        opacity 0.8s ease,
        transform 0.8s ease;
}

.fade.show {
    opacity: 1;

    transform: translateY(0);
}


/* =========================================
   ANIMAÇÕES
========================================= */

@keyframes floating {

    0%,
    100% {
        transform: translateY(0);
    }

    50% {
        transform: translateY(-20px);
    }
}

@keyframes titleAppear {

    from {
        opacity: 0;
        transform: translateY(30px) scale(0.95);
    }

    to {
        opacity: 1;
        transform: translateY(0) scale(1);
    }
}

@keyframes fadeUp {

    from {
        opacity: 0;
        transform: translateY(25px);
    }

    to {
        opacity: 1;
        transform: translateY(0);
    }
}


/* =========================================
   RESPONSIVIDADE
========================================= */

@media (max-width: 1000px) {

    .menu {
        gap: 15px;
    }

    .menu a {
        font-size: 12px;
    }

    .cards {
        grid-template-columns:
            repeat(2, 1fr);
    }
}


@media (max-width: 700px) {

    header {
        height: 65px;
    }

    nav {
        height: 65px;

        justify-content: center;
    }

    .menu {
        display: none;
    }

    section {
        padding: 75px 0;
    }

    .hero h1 {
        font-size: 58px;

        letter-spacing: 2px;
    }

    .hero p {
        font-size: 17px;
    }

    .section-title h2 {
        font-size: 32px;
    }

    .cards {
        grid-template-columns: 1fr;
    }

    .tips {
        grid-template-columns: 1fr;
    }

    .ai-box {
        padding: 25px;
    }

    .question-box {
        padding: 35px 20px;
    }

    .question-box h3 {
        font-size: 22px;
    }
}


@media (max-width: 400px) {

    .hero h1 {
        font-size: 45px;
    }

    .hero-button {
        padding: 13px 24px;
    }

    .card {
        padding: 25px;
    }
}