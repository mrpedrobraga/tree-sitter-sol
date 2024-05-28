@group  Inner Voices E01 - Fragmented
@scene  Temple of Reflection
@author Pedro Braga
@locale en

---

# Claire steps inside The Mirror's temple, her steps echoing.
[entrance]
bgm play Temple_Of_Reflection
(Claire)
- ...

# A few monuments are stored inside the temple, representing each of the forces.

[statue_spirit]
* Spirit.

[statue_magic]
* Magic.

[statue_light]
* Light.

[statue_darkness]
* Darkness.

[statue_chaos]
* Chaos.

# As Claire steps carefully into the chamber, a shadowy figure puts themselves between her and only exit.
# Pulsating light casts from The Mirror on the next room and smears a hard shadow of the figure over the ground, towering over Claire.
[pre_battle_talk]
(Erica)
- You have arrived at last.
- You traveled to this temple...
- In a selfless act, you put at risk your own mind.
- That prophecy...
- You feel in your heart the need to fulfill it.
- But... I...
- I...
# Erica turns to you holding the pencil.
- I can not allow it!!!

battle engage vs_erica

[vs_erica.narration.01]
* Erica stands in the way...

[alt.vs_erica.low_hp]
* Erica has low HP...

[alt.vs_erica.narration.01]
* Erica stands in the way.

[alt.vs_erica.low_hp]
* Erica has low HP.

[vs_erica.monologue.01]
(Erica serious)
- You don't know what it's like.
- Watching, over and over, humans venturing through that Mirror.
- To never come back....

[vs_erica.monologue.02]
(Erica serious)
- Even that gentle boy, who seemed would never leave...
- Who would come day after day... Bake us pastries and tell us stories...
- Until, one day, he left to never return.
(& sad)
- ...

[vs_erica.monologue.03]
(Erica serious)
- You don't have to do that. You could find a home here...
- Look at all of them back there.
(Erica sincere)
- They barely know you and they already love you.
- And I...
(& flushed)
- ...

[vs_erica.monologue.04]
(Erica serious)
- I won't let the adults throw that burden onto another child.
- The burden of carrying the fate of the world.
(Erica sincere)
- Don't you deserve the warmth of pastries, and milk, and stories before bed?

[vs_erica.monologue.05]
(Erica serious)
- You think you can avoid danger forever?
- Well, let's see how you deal with [chr=claire]my special attack[/chr]!

[vs_erica.act.spare.too_early]
* ...but she's still determined to win.

[vs_erica.act.spare.success]
* Erica put her weapon down.

[vs_erica.act.pose]
* Erica finds your pose cute.
* But she continues nevertheless.

[vs_erica.act.talk.01]
(Claire) - Why are you doing this?
(Erica)  - I don't want you to get hurt.
(Claire) - So you are throwing bullets at me???
(Erica)  - Ok, I see what you're saying.
* She keeps attacking you nevertheless.

[vs_erica.act.talk.02]
(Claire) - I have to go to the Mirror.
(Erica)  - no you don't

[vs_erica.act.talk.03]
(Claire) - I have to... fulfill my destiny?
(Erica)  - you don't even believe what you're saying

[vs_erica.act.talk.repeat]
* ...but you couldn't find the words.

[vs_erica.act.hug.failure]
* Hard to hug her while she's throwing stars at you.

[vs_erica.act.hug.success]
(Erica)
- Nooooooo...
- Okay, you win.

[erica_defeat_spare]
(Erica)
- Hahaha...
- I...
- I'm sorry.
- Look, the world you're walking into...
- It is a maze of secrets and lies.
- And so is inside The Mirror.
- So, please...
- ...take care of yourself, will ya?
- *yawn*
- i'm gonna sleep I'm like soooo tired

[erica_comfort]
(Erica)
- huh?
(Claire)
- Hug!
(Erica)
- i...
(Claire)
- I'll find a way to find this place again.
(Erica)
- ...
- please do.

[erica_comfort_repeat]
* (It's time to go).

[erica_defeat_violence]
(Erica)
- Ugh...
wait 2 seconds
- With this power you wield...
- You can achieve anything you desire...
- You won't let anybody stand in your way...
(Claire)
- ...
(Erica)
- And to think I was worried imagining you out there...
- Alone, in a world of secrets and lies.
- Well, now I see you'll fit right in.
(Claire)
- ...
(Erica)
- Bye bye.
# Erica walks away.
