// week07-4.cpp �ǲ߭p�eSimulation ���� ��4�D
// 1041. Robot Bounded In Circle
class Solution {
public:
    bool isRobotBounded(string instructions) {
        instructions = instructions + instructions + instructions + instructions; // ��4��
        cout << instructions;
        int x = 0, y = 0; // x�y��, y�y��
        int d = 0; // d��Vdirection 0:�_ 1:�F 2:�n 3:��
        // �k�� d = (d+1) % 4 ��4���l��
        // �k�� d = (d-1+4) % 4 = (d+3) %4 ���M�˹L�ӤF�A�ӯ��_�F!
        int dx[4] = {0, 1, 0, -1}; // �e�i�@��ɡA�|�� x += dx[d] �� y += dy[d]
        int dy[4] = {1, 0, -1, 0}; // �o���A�O[�a��2D��������ءA�M�w�e�i�h��]
        for (char c : instructions){ // �e�i1��A�t�X dx[d] dy[d] �e�i
            if (c=='G'){
                x += dx[d];
                y += dy[d];
            }else if (c=='R'){ // �k��
                d = (d+1) %4;
            }else if (c=='L'){ // ����
                d = (d+3) %4;
            }
        } // ���}�j���....���M�|�@�����C���ɭԷ|�����^�ӡA���ɭԷ|�^��
        cout << 'x' << x << 'y' << y << endl;
        if(x==0 && y==0) return true;
        else return false;
    }
};
