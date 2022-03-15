#ifndef INC_2DG_GAME_H
#define INC_2DG_GAME_H

namespace vz {
    class Game {

    public:
        Game();

        void Start();

    private:
        void Cleanup();

        void Run();

        bool Init();

        void Clear();

        void Render();

        void Draw();

        void Update(float dt);
    };
}

#endif //INC_2DG_GAME_H
