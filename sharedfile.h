typedef struct node
{

   int data ;
   struct node *next ;


}NODE,*PNODE;


typedef struct node1
{

   int data ;
   struct node1 *next ;
 struct node1 *prev ;


}NODE1,*PNODE1;

class SinglyLL
{
  private :

  PNODE head ;

  public:

   SinglyLL();

  ~SinglyLL();

  virtual void InsertFirst(int) ;

  virtual void display();


};


class doubly
{
   private :

   PNODE1 head2 ;

  public :

 doubly();
 ~doubly();

 virtual  void InsertFirst1(int);
  virtual void display1();


};

