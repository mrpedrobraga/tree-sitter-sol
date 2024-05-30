# Sol

Sol is a data/markup/scripting language for applications and assets. Being text-based, you can check `.sol` into version control, and being backend-agnostic means you can port assets across engines and implementations.
Sol itself is highly portable -- it's written in Rust and only requires providing implementations for external symbols you define.

## Features

Sol comes with many language features, from contract definitions to full-on programming.

### Models

You can define type safe models...
```lua
model Item
  field name                : text
  field usage_count         : text
  field consume_when_used   : truth
  field on_use              : Action
end
```
...and them implement them on another file.
```lua
impl Item

name = "Hamburger"
usage_count = 1
consume_when_used = yes

action on_use
  * You eat the {name}.
  * It tastes like cardboard.
  player.stats.heal(HP, 10)
  * Restored 10HP!
end
```

### Dialogs

Notably, Sol has builtin support for dialogues, making for a __beautiful__ cutscene format, that looks like a screen play.

```lua
use game::chapter_1::RETURNED_TO_SCHOOL

scene "School Entrance"
  with player do
    .move(10, 20)
    .look_at(Alexander)
  end

  [Alexander smiling]
  - Welcome back, dude? How have you been?
  wait(2.0 seconds)
  [& guilty]
  - Not much for talking, huh...
  - Um... by the way... eh...
  - Sorry for back there... when I... um... abandoned you...
  [& smiling]
  - No hard feelings, right?

  [Player]
  - *sigh*...

  set RETURNED_TO_SCHOOL
end
```

### Facts

Sol allows defining typed [algebraic](https://en.wikipedia.org/wiki/Algebraic_data_type) facts that help you ensure your game is in a valid state.

```lua
let chapter1 : some {
  SCHOOL_BEGGINING,
  DUNGEON_1 : some {
    PART_1,
    PART_2,
    PART_3 : all {
      BOSS_STATUS: either {
        BEFORE_BOSS,
        AFTER_BOSS : all {
          death_count : i32,
          used_violence : truth,
        }
      },
      SECRET_PUZZLE_STATUS: {
        UNDISCOVERED,
        UNFINISHED,
        COMPLETED_N_TIMES : i32
      },
    },
  },
  RETURNED_TO_SCHOOL,
}
```
A fact is a model, and a save file is an implementation of a fact model. By using Sol, saving and loading is effortless and fast.

## Installing

Not available yet.

## Contributing

Not available yet.
