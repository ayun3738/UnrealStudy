class Blackjack{
    public static void blackjack(string[] args)
    {
        // ReadLine()에 null이 들어올 수 있으므로 string?으로 선언
        string? NM = Console.ReadLine();
        if (NM == null)
        {
            return;
        }
        List<int> NMList = NM.Split(' ').Select(int.Parse).ToList();
        string? card = Console.ReadLine();
        if (card == null)
        {
            return;
        }
        List<int> cardList = card.Split(' ').Select(int.Parse).ToList();
        cardList.Sort();
        List<int> selectedCard = new List<int>();
        int max = 0;
        for (int i = 0; i < NMList[0] - 2; i++)
        {
            int sum = cardList[i];
            if (sum >= NMList[1])
            {
                break;
            }
            for (int j = i + 1; j < NMList[0] - 1; j++)
            {
                sum += cardList[j];
                if (sum >= NMList[1])
                {
                    sum -= cardList[j];
                    break;
                }
                for (int k = j + 1; k < NMList[0]; k++)
                {
                    sum += cardList[k];
                    if (sum > NMList[1])
                    {
                        sum -= cardList[k];
                        break;
                    }
                    else
                    {
                        if (sum > max)
                        {
                            max = sum;
                        }
                    }
                    sum -= cardList[k];
                }
                sum -= cardList[j];
            }
        }
        Console.WriteLine(max);
    }
}

