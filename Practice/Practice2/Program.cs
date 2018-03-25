using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;
using System.Diagnostics;

namespace Practice2
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Выполнить сортировку?");
            Console.WriteLine("1 - да, 2 - выход");
            int choice = Convert.ToInt32(Console.ReadLine());
            switch (choice)
            {
                case 1:
                    DataAnalys test = new DataAnalys();
                    test.Execute("E://1Универ//САОД//Practice2//data1.csv", 
                        "E://1Универ//САОД//Practice2//res.txt",
                        "E://1Универ//САОД//Practice2//res1.txt");
                    break;
                case 2:
                    break;
            }
            Console.ReadKey(true);
        }
    }

    class Building
    {
        private int unum;
        private string type1;
        private string type2;
        private string doc;
        private string dataDoc;
        private int numReg;
        private string dataReg;
        private int id;

        public Building(int unum, string type1, string type2, string doc,
            string dataDoc, int numReg, string dataReg, int id)
        {
            this.unum = unum;
            this.type1 = type1;
            this.type2 = type2;
            this.doc = doc;
            this.dataDoc = dataDoc;
            this.numReg = numReg;
            this.dataReg = dataReg;
            this.id = id;
        }
        public Building() { }
        public Building(Building b)
        {
            this.unum = b.unum;
            this.type1 = b.type1;
            this.type2 = b.type2;
            this.doc = b.doc;
            this.dataDoc = b.dataDoc;
            this.numReg = b.numReg;
            this.dataReg = b.dataReg;
            this.id = b.id;
        }
        public int getUnum()
        { return this.unum; }
        public string getType1()
        { return this.type1;  }
        public string getType2()
        { return this.type2; }
        public string getDoc()
        { return this.doc; }
        public string getDataDoc()
        { return this.dataDoc; }
        public int getNumReg()
        { return this.numReg; }
        public string getDataReg()
        { return this.dataReg; }
        public int getId()
        { return this.id; }
    }

    class DataAnalys
    {
        public bool Execute(string file1, string file2, string file3)
        {
            if (!File.Exists(file1))
                return false;
            //int count = File.ReadAllLines(file1).Length;
            int count = 10000;
            Building[] builds = new Building[count];
            Building[] builds1 = new Building[count];
            Stopwatch SW = new Stopwatch();
            Stopwatch SW1 = new Stopwatch();
            char delimeter = ',';
            try
            {
                using (StreamReader reader = new StreamReader(file1, Encoding.GetEncoding(1251)))
                {
                    for (int i = 0; i < count; i++)
                    {
                        string text = reader.ReadLine();
                        //Console.WriteLine(text);
                        string[] subtext = text.Split(delimeter);
                        if (subtext.Length != 8)
                        {
                            Console.WriteLine("Указано неверное воличество входных параметров  в строке {0} !", i);
                        }
                        else
                        {
                            builds[i] = new Building(Convert.ToInt32(subtext[0]), subtext[1], subtext[2], subtext[3], subtext[4],
                            Convert.ToInt32(subtext[5]), subtext[6], Convert.ToInt32(subtext[7]));
                            builds1[i] = new Building(Convert.ToInt32(subtext[0]), subtext[1], subtext[2], subtext[3], subtext[4],
                            Convert.ToInt32(subtext[5]), subtext[6], Convert.ToInt32(subtext[7]));
                        }
                    }
                }
            }
            catch (Exception ex)
            {
                Console.WriteLine(ex.Message);
            }
            SW.Start();
            builds = Sort(builds);
            SW.Stop();
            Console.WriteLine("{0} : {1} : {2} мс.", "Сортировка методом выбора", count, Convert.ToString(SW.ElapsedMilliseconds));
          /*
            SW1.Start();
            builds1 = Sort1(builds1);
            SW1.Stop();
            Console.WriteLine("{0} : {1} мс.", "Сортировка методом пересчета", Convert.ToString(SW1.ElapsedMilliseconds));
            Print(file2, builds);
            Print(file3, builds1);
          */  
            return true;
        }
        public Building[] Sort (Building[] builds)
        {
            Building b;
            int i, j, max, nmax;
            for (i = 0; i < builds.Length - 1; i++)
            {
                max = builds[i].getUnum();
                nmax = i;
                for (j = i + 1; j < builds.Length; j++)
                {
                    if (builds[j].getUnum() < max)
                    {
                        max = builds[j].getUnum();
                        nmax = j;
                    }
                }
                b = builds[nmax];
                builds[nmax] = builds[i];
                builds[i] = b;
            }
            return builds;
        }
        public Building[] Sort1 (Building[] builds1)
        {         
            int i, k, n;
            k = 10000000;
            int[] cr = new int[k+1];           
            n = builds1.Length;
            Building[] br = new Building[n];
            for (i = 0; i <= k; i++)
                cr[i] = 0;
            for (i = 0; i < n; i++)
                cr[builds1[i].getUnum()] += 1;
            for (i = 1; i <= k; i++)
                cr[i] += cr[i - 1];
            for (i = n - 1; i >= 0; i--)
            {
                br[cr[builds1[i].getUnum()] - 1] = builds1[i];
                cr[builds1[i].getUnum()] -= 1;
            }
            return br;
        }
        public void Print(string file, Building[] builds)
        {
            using (StreamWriter writer = File.CreateText(file))
            {
                for (int i = 0; i < builds.Length; i++)
                {
                    writer.WriteLine("{0}, {1}, {2}, {3}, {4}, {5}, {6}, {7}",
                        builds[i].getUnum(), builds[i].getType1(), builds[i].getType2(),
                        builds[i].getDoc(), builds[i].getDataDoc(), builds[i].getNumReg(),
                        builds[i].getDataReg(), builds[i].getId());
                }
            }
        }
    }
}
