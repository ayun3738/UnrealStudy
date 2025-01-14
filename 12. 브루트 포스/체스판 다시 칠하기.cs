using System.Data;

class ChessColor{
    public static void chesscolor(string[] args)
    {
        // ReadLine()에 null이 들어올 수 있으므로 string?으로 선언
        string? NM = Console.ReadLine();
        if (NM == null)
        {
            return;
        }
        List<int> NMList = NM.Split(' ').Select(s => int.Parse(s)).ToList();
        int odd = 0;
        int even = 0;
        for (int i = 0; i < NMList[0]; i++)
        {
            string? line = Console.ReadLine();
            if (line == null)
            {
                return;
            }
            
            for (int j = 0; j < NMList[1]; j++)
            {
                if (line[j] == 'B')
                {
                    if ((i + j) % 2 == 0)
                    {
                        even++;
                    }
                    else
                    {
                        odd++;
                    }
                }
        }
        int tmp1 = NMList[0] * NMList[1] / 2 + 1 - even + odd;
        int tmp2 = NMList[0] * NMList[1] / 2 - odd + even;
        Console.WriteLine(Math.Min(tmp1, tmp2));
        }}
}

